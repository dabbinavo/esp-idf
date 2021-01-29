// Copyright 2013-2020 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <string.h>
#include "sdkconfig.h"
#include "esp_system.h"
#include "esp_private/system_internal.h"
#include "esp_attr.h"
#include "esp_log.h"
#include "esp32c3/rom/cache.h"
#include "esp32c3/cache_err_int.h"
#include "riscv/riscv_interrupts.h"
#include "riscv/interrupt.h"
#include "esp_rom_uart.h"
#include "soc/gpio_reg.h"
#include "soc/rtc_cntl_reg.h"
#include "soc/timer_group_reg.h"
#include "soc/cpu.h"
#include "soc/rtc.h"
#include "soc/syscon_reg.h"
#include "soc/system_reg.h"
#include "hal/wdt_hal.h"

/* "inner" restart function for after RTOS, interrupts & anything else on this
 * core are already stopped. Stalls other core, resets hardware,
 * triggers restart.
*/
void IRAM_ATTR esp_restart_noos(void)
{
    // Disable interrupts
    riscv_global_interrupts_disable();
    // Enable RTC watchdog for 1 second
    wdt_hal_context_t rtc_wdt_ctx;
    wdt_hal_init(&rtc_wdt_ctx, WDT_RWDT, 0, false);
    uint32_t stage_timeout_ticks = (uint32_t)(1000ULL * rtc_clk_slow_freq_get_hz() / 1000ULL);
    wdt_hal_write_protect_disable(&rtc_wdt_ctx);
    wdt_hal_config_stage(&rtc_wdt_ctx, WDT_STAGE0, stage_timeout_ticks, WDT_STAGE_ACTION_RESET_SYSTEM);
    wdt_hal_config_stage(&rtc_wdt_ctx, WDT_STAGE1, stage_timeout_ticks, WDT_STAGE_ACTION_RESET_RTC);
    //Enable flash boot mode so that flash booting after restart is protected by the RTC WDT.
    wdt_hal_set_flashboot_en(&rtc_wdt_ctx, true);
    wdt_hal_write_protect_enable(&rtc_wdt_ctx);

    // Reset and stall the other CPU.
    // CPU must be reset before stalling, in case it was running a s32c1i
    // instruction. This would cause memory pool to be locked by arbiter
    // to the stalled CPU, preventing current CPU from accessing this pool.
    const uint32_t core_id = cpu_hal_get_core_id();
#if !CONFIG_FREERTOS_UNICORE
    const uint32_t other_core_id = (core_id == 0) ? 1 : 0;
    esp_cpu_reset(other_core_id);
    esp_cpu_stall(other_core_id);
#endif

    // Disable TG0/TG1 watchdogs
    wdt_hal_context_t wdt0_context = {.inst = WDT_MWDT0, .mwdt_dev = &TIMERG0};
    wdt_hal_write_protect_disable(&wdt0_context);
    wdt_hal_disable(&wdt0_context);
    wdt_hal_write_protect_enable(&wdt0_context);

    wdt_hal_context_t wdt1_context = {.inst = WDT_MWDT1, .mwdt_dev = &TIMERG1};
    wdt_hal_write_protect_disable(&wdt1_context);
    wdt_hal_disable(&wdt1_context);
    wdt_hal_write_protect_enable(&wdt1_context);

    // Flush any data left in UART FIFOs
    esp_rom_uart_tx_wait_idle(0);
    esp_rom_uart_tx_wait_idle(1);
    // Disable cache
    Cache_Disable_ICache();

    // 2nd stage bootloader reconfigures SPI flash signals.
    // Reset them to the defaults expected by ROM.
    WRITE_PERI_REG(GPIO_FUNC0_IN_SEL_CFG_REG, 0x30);
    WRITE_PERI_REG(GPIO_FUNC1_IN_SEL_CFG_REG, 0x30);
    WRITE_PERI_REG(GPIO_FUNC2_IN_SEL_CFG_REG, 0x30);
    WRITE_PERI_REG(GPIO_FUNC3_IN_SEL_CFG_REG, 0x30);
    WRITE_PERI_REG(GPIO_FUNC4_IN_SEL_CFG_REG, 0x30);
    WRITE_PERI_REG(GPIO_FUNC5_IN_SEL_CFG_REG, 0x30);

    // Reset wifi/bluetooth/ethernet/sdio (bb/mac)
    SET_PERI_REG_MASK(SYSTEM_CORE_RST_EN_REG,
                      SYSTEM_BB_RST | SYSTEM_FE_RST | SYSTEM_MAC_RST |
                      SYSTEM_BT_RST | SYSTEM_BTMAC_RST | SYSTEM_SDIO_RST |
                      SYSTEM_EMAC_RST | SYSTEM_MACPWR_RST |
                      SYSTEM_RW_BTMAC_RST | SYSTEM_RW_BTLP_RST | BLE_REG_REST_BIT
                      |BLE_PWR_REG_REST_BIT | BLE_BB_REG_REST_BIT);

    REG_WRITE(SYSTEM_CORE_RST_EN_REG, 0);

    // Reset timer/spi/uart
    SET_PERI_REG_MASK(SYSTEM_PERIP_RST_EN0_REG,
                      SYSTEM_TIMERS_RST | SYSTEM_SPI01_RST | SYSTEM_UART_RST);
    REG_WRITE(SYSTEM_PERIP_RST_EN0_REG, 0);
    // Reset dma
    SET_PERI_REG_MASK(SYSTEM_PERIP_RST_EN1_REG, SYSTEM_DMA_RST);
    REG_WRITE(SYSTEM_PERIP_RST_EN1_REG, 0);

    // Set CPU back to XTAL source, no PLL, same as hard reset
#if !CONFIG_IDF_ENV_FPGA
    rtc_clk_cpu_freq_set_xtal();
#endif

#if !CONFIG_FREERTOS_UNICORE
    // Clear entry point for APP CPU
    REG_WRITE(SYSTEM_CORE_1_CONTROL_1_REG, 0);
#endif

    // Reset CPUs
    if (core_id == 0) {
        // Running on PRO CPU: APP CPU is stalled. Can reset both CPUs.
#if !CONFIG_FREERTOS_UNICORE
        esp_cpu_reset(1);
#endif
        esp_cpu_reset(0);
    }
#if !CONFIG_FREERTOS_UNICORE
    else {
        // Running on APP CPU: need to reset PRO CPU and unstall it,
        // then reset APP CPU
        esp_cpu_reset(0);
        esp_cpu_unstall(0);
        esp_cpu_reset(1);
    }
#endif
    while (true) {
        ;
    }
}

void esp_chip_info(esp_chip_info_t *out_info)
{
    memset(out_info, 0, sizeof(*out_info));
    out_info->model = CHIP_ESP32C3;
    out_info->cores = 1;
    out_info->features = CHIP_FEATURE_WIFI_BGN | CHIP_FEATURE_BLE;
}