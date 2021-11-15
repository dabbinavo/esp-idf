/*
 * SPDX-FileCopyrightText: 2017-2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _SOC_APB_CTRL_REG_H_
#define _SOC_APB_CTRL_REG_H_


#ifdef __cplusplus
extern "C" {
#endif
#include "soc.h"

#define APB_CTRL_SYSCLK_CONF_REG          (DR_REG_SYSCON_BASE + 0x0)
/* APB_CTRL_RST_TICK_CNT : R/W ;bitpos:[12] ;default: 1'b0 ; */
/*description: reg_rst_tick_cnt.*/
#define APB_CTRL_RST_TICK_CNT    (BIT(12))
#define APB_CTRL_RST_TICK_CNT_M  (BIT(12))
#define APB_CTRL_RST_TICK_CNT_V  0x1
#define APB_CTRL_RST_TICK_CNT_S  12
/* APB_CTRL_CLK_EN : R/W ;bitpos:[11] ;default: 1'b0 ; */
/*description: reg_clk_en.*/
#define APB_CTRL_CLK_EN    (BIT(11))
#define APB_CTRL_CLK_EN_M  (BIT(11))
#define APB_CTRL_CLK_EN_V  0x1
#define APB_CTRL_CLK_EN_S  11
/* APB_CTRL_CLK_320M_EN : R/W ;bitpos:[10] ;default: 1'b0 ; */
/*description: reg_clk_320m_en.*/
#define APB_CTRL_CLK_320M_EN    (BIT(10))
#define APB_CTRL_CLK_320M_EN_M  (BIT(10))
#define APB_CTRL_CLK_320M_EN_V  0x1
#define APB_CTRL_CLK_320M_EN_S  10
/* APB_CTRL_PRE_DIV_CNT : R/W ;bitpos:[9:0] ;default: 10'h1 ; */
/*description: reg_pre_div_cnt.*/
#define APB_CTRL_PRE_DIV_CNT    0x000003FF
#define APB_CTRL_PRE_DIV_CNT_M  ((APB_CTRL_PRE_DIV_CNT_V)<<(APB_CTRL_PRE_DIV_CNT_S))
#define APB_CTRL_PRE_DIV_CNT_V  0x3FF
#define APB_CTRL_PRE_DIV_CNT_S  0

#define APB_CTRL_TICK_CONF_REG          (DR_REG_SYSCON_BASE + 0x4)
/* APB_CTRL_TICK_ENABLE : R/W ;bitpos:[16] ;default: 1'd1 ; */
/*description: reg_tick_enable.*/
#define APB_CTRL_TICK_ENABLE    (BIT(16))
#define APB_CTRL_TICK_ENABLE_M  (BIT(16))
#define APB_CTRL_TICK_ENABLE_V  0x1
#define APB_CTRL_TICK_ENABLE_S  16
/* APB_CTRL_CK8M_TICK_NUM : R/W ;bitpos:[15:8] ;default: 8'd7 ; */
/*description: reg_ck8m_tick_num.*/
#define APB_CTRL_CK8M_TICK_NUM    0x000000FF
#define APB_CTRL_CK8M_TICK_NUM_M  ((APB_CTRL_CK8M_TICK_NUM_V)<<(APB_CTRL_CK8M_TICK_NUM_S))
#define APB_CTRL_CK8M_TICK_NUM_V  0xFF
#define APB_CTRL_CK8M_TICK_NUM_S  8
/* APB_CTRL_XTAL_TICK_NUM : R/W ;bitpos:[7:0] ;default: 8'd39 ; */
/*description: reg_xtal_tick_num.*/
#define APB_CTRL_XTAL_TICK_NUM    0x000000FF
#define APB_CTRL_XTAL_TICK_NUM_M  ((APB_CTRL_XTAL_TICK_NUM_V)<<(APB_CTRL_XTAL_TICK_NUM_S))
#define APB_CTRL_XTAL_TICK_NUM_V  0xFF
#define APB_CTRL_XTAL_TICK_NUM_S  0

#define APB_CTRL_CLK_OUT_EN_REG          (DR_REG_SYSCON_BASE + 0x8)
/* APB_CTRL_CLK_XTAL_OEN : R/W ;bitpos:[10] ;default: 1'b1 ; */
/*description: reg_clk_xtal_oen.*/
#define APB_CTRL_CLK_XTAL_OEN    (BIT(10))
#define APB_CTRL_CLK_XTAL_OEN_M  (BIT(10))
#define APB_CTRL_CLK_XTAL_OEN_V  0x1
#define APB_CTRL_CLK_XTAL_OEN_S  10
/* APB_CTRL_CLK40X_BB_OEN : R/W ;bitpos:[9] ;default: 1'b1 ; */
/*description: reg_clk40x_bb_oen.*/
#define APB_CTRL_CLK40X_BB_OEN    (BIT(9))
#define APB_CTRL_CLK40X_BB_OEN_M  (BIT(9))
#define APB_CTRL_CLK40X_BB_OEN_V  0x1
#define APB_CTRL_CLK40X_BB_OEN_S  9
/* APB_CTRL_CLK_DAC_CPU_OEN : R/W ;bitpos:[8] ;default: 1'b1 ; */
/*description: reg_clk_dac_cpu_oen.*/
#define APB_CTRL_CLK_DAC_CPU_OEN    (BIT(8))
#define APB_CTRL_CLK_DAC_CPU_OEN_M  (BIT(8))
#define APB_CTRL_CLK_DAC_CPU_OEN_V  0x1
#define APB_CTRL_CLK_DAC_CPU_OEN_S  8
/* APB_CTRL_CLK_ADC_INF_OEN : R/W ;bitpos:[7] ;default: 1'b1 ; */
/*description: reg_clk_adc_inf_oen.*/
#define APB_CTRL_CLK_ADC_INF_OEN    (BIT(7))
#define APB_CTRL_CLK_ADC_INF_OEN_M  (BIT(7))
#define APB_CTRL_CLK_ADC_INF_OEN_V  0x1
#define APB_CTRL_CLK_ADC_INF_OEN_S  7
/* APB_CTRL_CLK_320M_OEN : R/W ;bitpos:[6] ;default: 1'b1 ; */
/*description: reg_clk_320m_oen.*/
#define APB_CTRL_CLK_320M_OEN    (BIT(6))
#define APB_CTRL_CLK_320M_OEN_M  (BIT(6))
#define APB_CTRL_CLK_320M_OEN_V  0x1
#define APB_CTRL_CLK_320M_OEN_S  6
/* APB_CTRL_CLK160_OEN : R/W ;bitpos:[5] ;default: 1'b1 ; */
/*description: reg_clk160_oen.*/
#define APB_CTRL_CLK160_OEN    (BIT(5))
#define APB_CTRL_CLK160_OEN_M  (BIT(5))
#define APB_CTRL_CLK160_OEN_V  0x1
#define APB_CTRL_CLK160_OEN_S  5
/* APB_CTRL_CLK80_OEN : R/W ;bitpos:[4] ;default: 1'b1 ; */
/*description: reg_clk80_oen.*/
#define APB_CTRL_CLK80_OEN    (BIT(4))
#define APB_CTRL_CLK80_OEN_M  (BIT(4))
#define APB_CTRL_CLK80_OEN_V  0x1
#define APB_CTRL_CLK80_OEN_S  4
/* APB_CTRL_CLK_BB_OEN : R/W ;bitpos:[3] ;default: 1'b1 ; */
/*description: reg_clk_bb_oen.*/
#define APB_CTRL_CLK_BB_OEN    (BIT(3))
#define APB_CTRL_CLK_BB_OEN_M  (BIT(3))
#define APB_CTRL_CLK_BB_OEN_V  0x1
#define APB_CTRL_CLK_BB_OEN_S  3
/* APB_CTRL_CLK44_OEN : R/W ;bitpos:[2] ;default: 1'b1 ; */
/*description: reg_clk44_oen.*/
#define APB_CTRL_CLK44_OEN    (BIT(2))
#define APB_CTRL_CLK44_OEN_M  (BIT(2))
#define APB_CTRL_CLK44_OEN_V  0x1
#define APB_CTRL_CLK44_OEN_S  2
/* APB_CTRL_CLK22_OEN : R/W ;bitpos:[1] ;default: 1'b1 ; */
/*description: reg_clk22_oen.*/
#define APB_CTRL_CLK22_OEN    (BIT(1))
#define APB_CTRL_CLK22_OEN_M  (BIT(1))
#define APB_CTRL_CLK22_OEN_V  0x1
#define APB_CTRL_CLK22_OEN_S  1
/* APB_CTRL_CLK20_OEN : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description: reg_clk20_oen.*/
#define APB_CTRL_CLK20_OEN    (BIT(0))
#define APB_CTRL_CLK20_OEN_M  (BIT(0))
#define APB_CTRL_CLK20_OEN_V  0x1
#define APB_CTRL_CLK20_OEN_S  0

#define APB_CTRL_WIFI_BB_CFG_REG          (DR_REG_SYSCON_BASE + 0xC)
/* APB_CTRL_WIFI_BB_CFG : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: reg_wifi_bb_cfg.*/
#define APB_CTRL_WIFI_BB_CFG    0xFFFFFFFF
#define APB_CTRL_WIFI_BB_CFG_M  ((APB_CTRL_WIFI_BB_CFG_V)<<(APB_CTRL_WIFI_BB_CFG_S))
#define APB_CTRL_WIFI_BB_CFG_V  0xFFFFFFFF
#define APB_CTRL_WIFI_BB_CFG_S  0

#define APB_CTRL_WIFI_BB_CFG_2_REG          (DR_REG_SYSCON_BASE + 0x10)
/* APB_CTRL_WIFI_BB_CFG_2 : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: reg_wifi_bb_cfg_2.*/
#define APB_CTRL_WIFI_BB_CFG_2    0xFFFFFFFF
#define APB_CTRL_WIFI_BB_CFG_2_M  ((APB_CTRL_WIFI_BB_CFG_2_V)<<(APB_CTRL_WIFI_BB_CFG_2_S))
#define APB_CTRL_WIFI_BB_CFG_2_V  0xFFFFFFFF
#define APB_CTRL_WIFI_BB_CFG_2_S  0

#define APB_CTRL_WIFI_CLK_EN_REG          (DR_REG_SYSCON_BASE + 0x14)
/* APB_CTRL_WIFI_CLK_EN : R/W ;bitpos:[31:0] ;default: 32'hfffce030 ; */
/*description: reg_wifi_clk_en.*/
#define APB_CTRL_WIFI_CLK_EN    0xFFFFFFFF
#define APB_CTRL_WIFI_CLK_EN_M  ((APB_CTRL_WIFI_CLK_EN_V)<<(APB_CTRL_WIFI_CLK_EN_S))
#define APB_CTRL_WIFI_CLK_EN_V  0xFFFFFFFF
#define APB_CTRL_WIFI_CLK_EN_S  0

#define APB_CTRL_WIFI_RST_EN_REG          (DR_REG_SYSCON_BASE + 0x18)
/* APB_CTRL_WIFI_RST : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: reg_wifi_rst.*/
#define APB_CTRL_WIFI_RST    0xFFFFFFFF
#define APB_CTRL_WIFI_RST_M  ((APB_CTRL_WIFI_RST_V)<<(APB_CTRL_WIFI_RST_S))
#define APB_CTRL_WIFI_RST_V  0xFFFFFFFF
#define APB_CTRL_WIFI_RST_S  0

#define APB_CTRL_HOST_INF_SEL_REG          (DR_REG_SYSCON_BASE + 0x1C)
/* APB_CTRL_PERI_IO_SWAP : R/W ;bitpos:[7:0] ;default: 8'h0 ; */
/*description: reg_peri_io_swap.*/
#define APB_CTRL_PERI_IO_SWAP    0x000000FF
#define APB_CTRL_PERI_IO_SWAP_M  ((APB_CTRL_PERI_IO_SWAP_V)<<(APB_CTRL_PERI_IO_SWAP_S))
#define APB_CTRL_PERI_IO_SWAP_V  0xFF
#define APB_CTRL_PERI_IO_SWAP_S  0

#define APB_CTRL_EXT_MEM_PMS_LOCK_REG          (DR_REG_SYSCON_BASE + 0x20)
/* APB_CTRL_EXT_MEM_PMS_LOCK : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: reg_ext_mem_pms_lock.*/
#define APB_CTRL_EXT_MEM_PMS_LOCK    (BIT(0))
#define APB_CTRL_EXT_MEM_PMS_LOCK_M  (BIT(0))
#define APB_CTRL_EXT_MEM_PMS_LOCK_V  0x1
#define APB_CTRL_EXT_MEM_PMS_LOCK_S  0

#define APB_CTRL_FLASH_ACE0_ATTR_REG          (DR_REG_SYSCON_BASE + 0x28)
/* APB_CTRL_FLASH_ACE0_ATTR : R/W ;bitpos:[1:0] ;default: 2'h3 ; */
/*description: reg_flash_ace0_attr.*/
#define APB_CTRL_FLASH_ACE0_ATTR    0x00000003
#define APB_CTRL_FLASH_ACE0_ATTR_M  ((APB_CTRL_FLASH_ACE0_ATTR_V)<<(APB_CTRL_FLASH_ACE0_ATTR_S))
#define APB_CTRL_FLASH_ACE0_ATTR_V  0x3
#define APB_CTRL_FLASH_ACE0_ATTR_S  0

#define APB_CTRL_FLASH_ACE1_ATTR_REG          (DR_REG_SYSCON_BASE + 0x2C)
/* APB_CTRL_FLASH_ACE1_ATTR : R/W ;bitpos:[1:0] ;default: 2'h3 ; */
/*description: reg_flash_ace1_attr.*/
#define APB_CTRL_FLASH_ACE1_ATTR    0x00000003
#define APB_CTRL_FLASH_ACE1_ATTR_M  ((APB_CTRL_FLASH_ACE1_ATTR_V)<<(APB_CTRL_FLASH_ACE1_ATTR_S))
#define APB_CTRL_FLASH_ACE1_ATTR_V  0x3
#define APB_CTRL_FLASH_ACE1_ATTR_S  0

#define APB_CTRL_FLASH_ACE2_ATTR_REG          (DR_REG_SYSCON_BASE + 0x30)
/* APB_CTRL_FLASH_ACE2_ATTR : R/W ;bitpos:[1:0] ;default: 2'h3 ; */
/*description: reg_flash_ace2_attr.*/
#define APB_CTRL_FLASH_ACE2_ATTR    0x00000003
#define APB_CTRL_FLASH_ACE2_ATTR_M  ((APB_CTRL_FLASH_ACE2_ATTR_V)<<(APB_CTRL_FLASH_ACE2_ATTR_S))
#define APB_CTRL_FLASH_ACE2_ATTR_V  0x3
#define APB_CTRL_FLASH_ACE2_ATTR_S  0

#define APB_CTRL_FLASH_ACE3_ATTR_REG          (DR_REG_SYSCON_BASE + 0x34)
/* APB_CTRL_FLASH_ACE3_ATTR : R/W ;bitpos:[1:0] ;default: 2'h3 ; */
/*description: reg_flash_ace3_attr.*/
#define APB_CTRL_FLASH_ACE3_ATTR    0x00000003
#define APB_CTRL_FLASH_ACE3_ATTR_M  ((APB_CTRL_FLASH_ACE3_ATTR_V)<<(APB_CTRL_FLASH_ACE3_ATTR_S))
#define APB_CTRL_FLASH_ACE3_ATTR_V  0x3
#define APB_CTRL_FLASH_ACE3_ATTR_S  0

#define APB_CTRL_FLASH_ACE0_ADDR_REG          (DR_REG_SYSCON_BASE + 0x38)
/* APB_CTRL_FLASH_ACE0_ADDR_S : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: reg_flash_ace0_addr_s.*/
#define APB_CTRL_FLASH_ACE0_ADDR_S    0xFFFFFFFF
#define APB_CTRL_FLASH_ACE0_ADDR_S_M  ((APB_CTRL_FLASH_ACE0_ADDR_S_V)<<(APB_CTRL_FLASH_ACE0_ADDR_S_S))
#define APB_CTRL_FLASH_ACE0_ADDR_S_V  0xFFFFFFFF
#define APB_CTRL_FLASH_ACE0_ADDR_S_S  0

#define APB_CTRL_FLASH_ACE1_ADDR_REG          (DR_REG_SYSCON_BASE + 0x3C)
/* APB_CTRL_FLASH_ACE1_ADDR_S : R/W ;bitpos:[31:0] ;default: 32'h400000 ; */
/*description: reg_flash_ace1_addr_s.*/
#define APB_CTRL_FLASH_ACE1_ADDR_S    0xFFFFFFFF
#define APB_CTRL_FLASH_ACE1_ADDR_S_M  ((APB_CTRL_FLASH_ACE1_ADDR_S_V)<<(APB_CTRL_FLASH_ACE1_ADDR_S_S))
#define APB_CTRL_FLASH_ACE1_ADDR_S_V  0xFFFFFFFF
#define APB_CTRL_FLASH_ACE1_ADDR_S_S  0

#define APB_CTRL_FLASH_ACE2_ADDR_REG          (DR_REG_SYSCON_BASE + 0x40)
/* APB_CTRL_FLASH_ACE2_ADDR_S : R/W ;bitpos:[31:0] ;default: 32'h800000 ; */
/*description: reg_flash_ace2_addr_s.*/
#define APB_CTRL_FLASH_ACE2_ADDR_S    0xFFFFFFFF
#define APB_CTRL_FLASH_ACE2_ADDR_S_M  ((APB_CTRL_FLASH_ACE2_ADDR_S_V)<<(APB_CTRL_FLASH_ACE2_ADDR_S_S))
#define APB_CTRL_FLASH_ACE2_ADDR_S_V  0xFFFFFFFF
#define APB_CTRL_FLASH_ACE2_ADDR_S_S  0

#define APB_CTRL_FLASH_ACE3_ADDR_REG          (DR_REG_SYSCON_BASE + 0x44)
/* APB_CTRL_FLASH_ACE3_ADDR_S : R/W ;bitpos:[31:0] ;default: 32'hc00000 ; */
/*description: reg_flash_ace3_addr_s.*/
#define APB_CTRL_FLASH_ACE3_ADDR_S    0xFFFFFFFF
#define APB_CTRL_FLASH_ACE3_ADDR_S_M  ((APB_CTRL_FLASH_ACE3_ADDR_S_V)<<(APB_CTRL_FLASH_ACE3_ADDR_S_S))
#define APB_CTRL_FLASH_ACE3_ADDR_S_V  0xFFFFFFFF
#define APB_CTRL_FLASH_ACE3_ADDR_S_S  0

#define APB_CTRL_FLASH_ACE0_SIZE_REG          (DR_REG_SYSCON_BASE + 0x48)
/* APB_CTRL_FLASH_ACE0_SIZE : R/W ;bitpos:[12:0] ;default: 13'h400 ; */
/*description: reg_flash_ace0_size.*/
#define APB_CTRL_FLASH_ACE0_SIZE    0x00001FFF
#define APB_CTRL_FLASH_ACE0_SIZE_M  ((APB_CTRL_FLASH_ACE0_SIZE_V)<<(APB_CTRL_FLASH_ACE0_SIZE_S))
#define APB_CTRL_FLASH_ACE0_SIZE_V  0x1FFF
#define APB_CTRL_FLASH_ACE0_SIZE_S  0

#define APB_CTRL_FLASH_ACE1_SIZE_REG          (DR_REG_SYSCON_BASE + 0x4C)
/* APB_CTRL_FLASH_ACE1_SIZE : R/W ;bitpos:[12:0] ;default: 13'h400 ; */
/*description: reg_flash_ace1_size.*/
#define APB_CTRL_FLASH_ACE1_SIZE    0x00001FFF
#define APB_CTRL_FLASH_ACE1_SIZE_M  ((APB_CTRL_FLASH_ACE1_SIZE_V)<<(APB_CTRL_FLASH_ACE1_SIZE_S))
#define APB_CTRL_FLASH_ACE1_SIZE_V  0x1FFF
#define APB_CTRL_FLASH_ACE1_SIZE_S  0

#define APB_CTRL_FLASH_ACE2_SIZE_REG          (DR_REG_SYSCON_BASE + 0x50)
/* APB_CTRL_FLASH_ACE2_SIZE : R/W ;bitpos:[12:0] ;default: 13'h400 ; */
/*description: reg_flash_ace2_size.*/
#define APB_CTRL_FLASH_ACE2_SIZE    0x00001FFF
#define APB_CTRL_FLASH_ACE2_SIZE_M  ((APB_CTRL_FLASH_ACE2_SIZE_V)<<(APB_CTRL_FLASH_ACE2_SIZE_S))
#define APB_CTRL_FLASH_ACE2_SIZE_V  0x1FFF
#define APB_CTRL_FLASH_ACE2_SIZE_S  0

#define APB_CTRL_FLASH_ACE3_SIZE_REG          (DR_REG_SYSCON_BASE + 0x54)
/* APB_CTRL_FLASH_ACE3_SIZE : R/W ;bitpos:[12:0] ;default: 13'h400 ; */
/*description: reg_flash_ace3_size.*/
#define APB_CTRL_FLASH_ACE3_SIZE    0x00001FFF
#define APB_CTRL_FLASH_ACE3_SIZE_M  ((APB_CTRL_FLASH_ACE3_SIZE_V)<<(APB_CTRL_FLASH_ACE3_SIZE_S))
#define APB_CTRL_FLASH_ACE3_SIZE_V  0x1FFF
#define APB_CTRL_FLASH_ACE3_SIZE_S  0

#define APB_CTRL_SPI_MEM_PMS_CTRL_REG          (DR_REG_SYSCON_BASE + 0x88)
/* APB_CTRL_SPI_MEM_REJECT_CDE : RO ;bitpos:[6:2] ;default: 5'h0 ; */
/*description: reg_spi_mem_reject_cde.*/
#define APB_CTRL_SPI_MEM_REJECT_CDE    0x0000001F
#define APB_CTRL_SPI_MEM_REJECT_CDE_M  ((APB_CTRL_SPI_MEM_REJECT_CDE_V)<<(APB_CTRL_SPI_MEM_REJECT_CDE_S))
#define APB_CTRL_SPI_MEM_REJECT_CDE_V  0x1F
#define APB_CTRL_SPI_MEM_REJECT_CDE_S  2
/* APB_CTRL_SPI_MEM_REJECT_CLR : WOD ;bitpos:[1] ;default: 1'b0 ; */
/*description: reg_spi_mem_reject_clr.*/
#define APB_CTRL_SPI_MEM_REJECT_CLR    (BIT(1))
#define APB_CTRL_SPI_MEM_REJECT_CLR_M  (BIT(1))
#define APB_CTRL_SPI_MEM_REJECT_CLR_V  0x1
#define APB_CTRL_SPI_MEM_REJECT_CLR_S  1
/* APB_CTRL_SPI_MEM_REJECT_INT : RO ;bitpos:[0] ;default: 1'b0 ; */
/*description: reg_spi_mem_reject_int.*/
#define APB_CTRL_SPI_MEM_REJECT_INT    (BIT(0))
#define APB_CTRL_SPI_MEM_REJECT_INT_M  (BIT(0))
#define APB_CTRL_SPI_MEM_REJECT_INT_V  0x1
#define APB_CTRL_SPI_MEM_REJECT_INT_S  0

#define APB_CTRL_SPI_MEM_REJECT_ADDR_REG          (DR_REG_SYSCON_BASE + 0x8C)
/* APB_CTRL_SPI_MEM_REJECT_ADDR : RO ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: reg_spi_mem_reject_addr.*/
#define APB_CTRL_SPI_MEM_REJECT_ADDR    0xFFFFFFFF
#define APB_CTRL_SPI_MEM_REJECT_ADDR_M  ((APB_CTRL_SPI_MEM_REJECT_ADDR_V)<<(APB_CTRL_SPI_MEM_REJECT_ADDR_S))
#define APB_CTRL_SPI_MEM_REJECT_ADDR_V  0xFFFFFFFF
#define APB_CTRL_SPI_MEM_REJECT_ADDR_S  0

#define APB_CTRL_SDIO_CTRL_REG          (DR_REG_SYSCON_BASE + 0x90)
/* APB_CTRL_SDIO_WIN_ACCESS_EN : R/W ;bitpos:[0] ;default: 1'h0 ; */
/*description: reg_sdio_win_access_en.*/
#define APB_CTRL_SDIO_WIN_ACCESS_EN    (BIT(0))
#define APB_CTRL_SDIO_WIN_ACCESS_EN_M  (BIT(0))
#define APB_CTRL_SDIO_WIN_ACCESS_EN_V  0x1
#define APB_CTRL_SDIO_WIN_ACCESS_EN_S  0

#define APB_CTRL_REDCY_SIG0_REG          (DR_REG_SYSCON_BASE + 0x94)
/* APB_CTRL_REDCY_ANDOR : RO ;bitpos:[31] ;default: 1'h0 ; */
/*description: reg_redcy_andor.*/
#define APB_CTRL_REDCY_ANDOR    (BIT(31))
#define APB_CTRL_REDCY_ANDOR_M  (BIT(31))
#define APB_CTRL_REDCY_ANDOR_V  0x1
#define APB_CTRL_REDCY_ANDOR_S  31
/* APB_CTRL_REDCY_SIG0 : R/W ;bitpos:[30:0] ;default: 31'h0 ; */
/*description: reg_redcy_sig0.*/
#define APB_CTRL_REDCY_SIG0    0x7FFFFFFF
#define APB_CTRL_REDCY_SIG0_M  ((APB_CTRL_REDCY_SIG0_V)<<(APB_CTRL_REDCY_SIG0_S))
#define APB_CTRL_REDCY_SIG0_V  0x7FFFFFFF
#define APB_CTRL_REDCY_SIG0_S  0

#define APB_CTRL_REDCY_SIG1_REG          (DR_REG_SYSCON_BASE + 0x98)
/* APB_CTRL_REDCY_NANDOR : RO ;bitpos:[31] ;default: 1'h0 ; */
/*description: reg_redcy_nandor.*/
#define APB_CTRL_REDCY_NANDOR    (BIT(31))
#define APB_CTRL_REDCY_NANDOR_M  (BIT(31))
#define APB_CTRL_REDCY_NANDOR_V  0x1
#define APB_CTRL_REDCY_NANDOR_S  31
/* APB_CTRL_REDCY_SIG1 : R/W ;bitpos:[30:0] ;default: 31'h0 ; */
/*description: reg_redcy_sig1.*/
#define APB_CTRL_REDCY_SIG1    0x7FFFFFFF
#define APB_CTRL_REDCY_SIG1_M  ((APB_CTRL_REDCY_SIG1_V)<<(APB_CTRL_REDCY_SIG1_S))
#define APB_CTRL_REDCY_SIG1_V  0x7FFFFFFF
#define APB_CTRL_REDCY_SIG1_S  0

#define APB_CTRL_FRONT_END_MEM_PD_REG          (DR_REG_SYSCON_BASE + 0x9C)
/* APB_CTRL_FREQ_MEM_FORCE_PD : R/W ;bitpos:[7] ;default: 1'b0 ; */
/*description: reg_freq_mem_force_pd.*/
#define APB_CTRL_FREQ_MEM_FORCE_PD    (BIT(7))
#define APB_CTRL_FREQ_MEM_FORCE_PD_M  (BIT(7))
#define APB_CTRL_FREQ_MEM_FORCE_PD_V  0x1
#define APB_CTRL_FREQ_MEM_FORCE_PD_S  7
/* APB_CTRL_FREQ_MEM_FORCE_PU : R/W ;bitpos:[6] ;default: 1'b1 ; */
/*description: reg_freq_mem_force_pu.*/
#define APB_CTRL_FREQ_MEM_FORCE_PU    (BIT(6))
#define APB_CTRL_FREQ_MEM_FORCE_PU_M  (BIT(6))
#define APB_CTRL_FREQ_MEM_FORCE_PU_V  0x1
#define APB_CTRL_FREQ_MEM_FORCE_PU_S  6
/* APB_CTRL_DC_MEM_FORCE_PD : R/W ;bitpos:[5] ;default: 1'b0 ; */
/*description: reg_dc_mem_force_pd.*/
#define APB_CTRL_DC_MEM_FORCE_PD    (BIT(5))
#define APB_CTRL_DC_MEM_FORCE_PD_M  (BIT(5))
#define APB_CTRL_DC_MEM_FORCE_PD_V  0x1
#define APB_CTRL_DC_MEM_FORCE_PD_S  5
/* APB_CTRL_DC_MEM_FORCE_PU : R/W ;bitpos:[4] ;default: 1'b1 ; */
/*description: reg_dc_mem_force_pu.*/
#define APB_CTRL_DC_MEM_FORCE_PU    (BIT(4))
#define APB_CTRL_DC_MEM_FORCE_PU_M  (BIT(4))
#define APB_CTRL_DC_MEM_FORCE_PU_V  0x1
#define APB_CTRL_DC_MEM_FORCE_PU_S  4
/* APB_CTRL_PBUS_MEM_FORCE_PD : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: reg_pbus_mem_force_pd.*/
#define APB_CTRL_PBUS_MEM_FORCE_PD    (BIT(3))
#define APB_CTRL_PBUS_MEM_FORCE_PD_M  (BIT(3))
#define APB_CTRL_PBUS_MEM_FORCE_PD_V  0x1
#define APB_CTRL_PBUS_MEM_FORCE_PD_S  3
/* APB_CTRL_PBUS_MEM_FORCE_PU : R/W ;bitpos:[2] ;default: 1'b1 ; */
/*description: reg_pbus_mem_force_pu.*/
#define APB_CTRL_PBUS_MEM_FORCE_PU    (BIT(2))
#define APB_CTRL_PBUS_MEM_FORCE_PU_M  (BIT(2))
#define APB_CTRL_PBUS_MEM_FORCE_PU_V  0x1
#define APB_CTRL_PBUS_MEM_FORCE_PU_S  2
/* APB_CTRL_AGC_MEM_FORCE_PD : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: reg_agc_mem_force_pd.*/
#define APB_CTRL_AGC_MEM_FORCE_PD    (BIT(1))
#define APB_CTRL_AGC_MEM_FORCE_PD_M  (BIT(1))
#define APB_CTRL_AGC_MEM_FORCE_PD_V  0x1
#define APB_CTRL_AGC_MEM_FORCE_PD_S  1
/* APB_CTRL_AGC_MEM_FORCE_PU : R/W ;bitpos:[0] ;default: 1'b1 ; */
/*description: reg_agc_mem_force_pu.*/
#define APB_CTRL_AGC_MEM_FORCE_PU    (BIT(0))
#define APB_CTRL_AGC_MEM_FORCE_PU_M  (BIT(0))
#define APB_CTRL_AGC_MEM_FORCE_PU_V  0x1
#define APB_CTRL_AGC_MEM_FORCE_PU_S  0

#define APB_CTRL_RETENTION_CTRL_REG          (DR_REG_SYSCON_BASE + 0xA0)
/* APB_CTRL_NOBYPASS_CPU_ISO_RST : R/W ;bitpos:[27] ;default: 1'b0 ; */
/*description: reg_nobypass_cpu_iso_rst.*/
#define APB_CTRL_NOBYPASS_CPU_ISO_RST    (BIT(27))
#define APB_CTRL_NOBYPASS_CPU_ISO_RST_M  (BIT(27))
#define APB_CTRL_NOBYPASS_CPU_ISO_RST_V  0x1
#define APB_CTRL_NOBYPASS_CPU_ISO_RST_S  27
/* APB_CTRL_RETENTION_LINK_ADDR : R/W ;bitpos:[26:0] ;default: 27'd0 ; */
/*description: reg_retention_link_addr.*/
#define APB_CTRL_RETENTION_LINK_ADDR    0x07FFFFFF
#define APB_CTRL_RETENTION_LINK_ADDR_M  ((APB_CTRL_RETENTION_LINK_ADDR_V)<<(APB_CTRL_RETENTION_LINK_ADDR_S))
#define APB_CTRL_RETENTION_LINK_ADDR_V  0x7FFFFFF
#define APB_CTRL_RETENTION_LINK_ADDR_S  0

#define APB_CTRL_CLKGATE_FORCE_ON_REG          (DR_REG_SYSCON_BASE + 0xA4)
/* APB_CTRL_SRAM_CLKGATE_FORCE_ON : R/W ;bitpos:[6:3] ;default: 4'hf ; */
/*description: Set the bit to 1 to force sram always have clock, for low power can clear to 0 t
hen only when have access the sram have clock.*/
#define APB_CTRL_SRAM_CLKGATE_FORCE_ON    0x0000000F
#define APB_CTRL_SRAM_CLKGATE_FORCE_ON_M  ((APB_CTRL_SRAM_CLKGATE_FORCE_ON_V)<<(APB_CTRL_SRAM_CLKGATE_FORCE_ON_S))
#define APB_CTRL_SRAM_CLKGATE_FORCE_ON_V  0xF
#define APB_CTRL_SRAM_CLKGATE_FORCE_ON_S  3
/* APB_CTRL_ROM_CLKGATE_FORCE_ON : R/W ;bitpos:[2:0] ;default: 3'd7 ; */
/*description: Set the bit to 1 to force rom always have clock, for low power can clear to 0 th
en only when have access the rom have clock.*/
#define APB_CTRL_ROM_CLKGATE_FORCE_ON    0x00000007
#define APB_CTRL_ROM_CLKGATE_FORCE_ON_M  ((APB_CTRL_ROM_CLKGATE_FORCE_ON_V)<<(APB_CTRL_ROM_CLKGATE_FORCE_ON_S))
#define APB_CTRL_ROM_CLKGATE_FORCE_ON_V  0x7
#define APB_CTRL_ROM_CLKGATE_FORCE_ON_S  0

#define APB_CTRL_MEM_POWER_DOWN_REG          (DR_REG_SYSCON_BASE + 0xA8)
/* APB_CTRL_SRAM_POWER_DOWN : R/W ;bitpos:[6:3] ;default: 4'hf ; */
/*description: Set 1 to let sram power down.*/
#define APB_CTRL_SRAM_POWER_DOWN    0x0000000F
#define APB_CTRL_SRAM_POWER_DOWN_M  ((APB_CTRL_SRAM_POWER_DOWN_V)<<(APB_CTRL_SRAM_POWER_DOWN_S))
#define APB_CTRL_SRAM_POWER_DOWN_V  0xF
#define APB_CTRL_SRAM_POWER_DOWN_S  3
/* APB_CTRL_ROM_POWER_DOWN : R/W ;bitpos:[2:0] ;default: 3'd7 ; */
/*description: Set 1 to let rom power down.*/
#define APB_CTRL_ROM_POWER_DOWN    0x00000007
#define APB_CTRL_ROM_POWER_DOWN_M  ((APB_CTRL_ROM_POWER_DOWN_V)<<(APB_CTRL_ROM_POWER_DOWN_S))
#define APB_CTRL_ROM_POWER_DOWN_V  0x7
#define APB_CTRL_ROM_POWER_DOWN_S  0

#define APB_CTRL_MEM_POWER_UP_REG          (DR_REG_SYSCON_BASE + 0xAC)
/* APB_CTRL_SRAM_POWER_UP : R/W ;bitpos:[6:3] ;default: 4'hf ; */
/*description: Set 1 to let sram power up.*/
#define APB_CTRL_SRAM_POWER_UP    0x0000000F
#define APB_CTRL_SRAM_POWER_UP_M  ((APB_CTRL_SRAM_POWER_UP_V)<<(APB_CTRL_SRAM_POWER_UP_S))
#define APB_CTRL_SRAM_POWER_UP_V  0xF
#define APB_CTRL_SRAM_POWER_UP_S  3
/* APB_CTRL_ROM_POWER_UP : R/W ;bitpos:[2:0] ;default: 3'd7 ; */
/*description: Set 1 to let rom power up.*/
#define APB_CTRL_ROM_POWER_UP    0x00000007
#define APB_CTRL_ROM_POWER_UP_M  ((APB_CTRL_ROM_POWER_UP_V)<<(APB_CTRL_ROM_POWER_UP_S))
#define APB_CTRL_ROM_POWER_UP_V  0x7
#define APB_CTRL_ROM_POWER_UP_S  0

#define APB_CTRL_RND_DATA_REG          (DR_REG_SYSCON_BASE + 0xB0)
/* APB_CTRL_RND_DATA : RO ;bitpos:[31:0] ;default: 32'b0 ; */
/*description: reg_rnd_data.*/
#define APB_CTRL_RND_DATA    0xFFFFFFFF
#define APB_CTRL_RND_DATA_M  ((APB_CTRL_RND_DATA_V)<<(APB_CTRL_RND_DATA_S))
#define APB_CTRL_RND_DATA_V  0xFFFFFFFF
#define APB_CTRL_RND_DATA_S  0

#define APB_CTRL_PERI_BACKUP_CONFIG_REG          (DR_REG_SYSCON_BASE + 0xB4)
/* APB_CTRL_PERI_BACKUP_ENA : R/W ;bitpos:[31] ;default: 1'b0 ; */
/*description: reg_peri_backup_ena.*/
#define APB_CTRL_PERI_BACKUP_ENA    (BIT(31))
#define APB_CTRL_PERI_BACKUP_ENA_M  (BIT(31))
#define APB_CTRL_PERI_BACKUP_ENA_V  0x1
#define APB_CTRL_PERI_BACKUP_ENA_S  31
/* APB_CTRL_PERI_BACKUP_TO_MEM : R/W ;bitpos:[30] ;default: 1'b0 ; */
/*description: reg_peri_backup_to_mem.*/
#define APB_CTRL_PERI_BACKUP_TO_MEM    (BIT(30))
#define APB_CTRL_PERI_BACKUP_TO_MEM_M  (BIT(30))
#define APB_CTRL_PERI_BACKUP_TO_MEM_V  0x1
#define APB_CTRL_PERI_BACKUP_TO_MEM_S  30
/* APB_CTRL_PERI_BACKUP_START : WO ;bitpos:[29] ;default: 1'b0 ; */
/*description: reg_peri_backup_start.*/
#define APB_CTRL_PERI_BACKUP_START    (BIT(29))
#define APB_CTRL_PERI_BACKUP_START_M  (BIT(29))
#define APB_CTRL_PERI_BACKUP_START_V  0x1
#define APB_CTRL_PERI_BACKUP_START_S  29
/* APB_CTRL_PERI_BACKUP_SIZE : R/W ;bitpos:[28:19] ;default: 10'd0 ; */
/*description: reg_peri_backup_size.*/
#define APB_CTRL_PERI_BACKUP_SIZE    0x000003FF
#define APB_CTRL_PERI_BACKUP_SIZE_M  ((APB_CTRL_PERI_BACKUP_SIZE_V)<<(APB_CTRL_PERI_BACKUP_SIZE_S))
#define APB_CTRL_PERI_BACKUP_SIZE_V  0x3FF
#define APB_CTRL_PERI_BACKUP_SIZE_S  19
/* APB_CTRL_PERI_BACKUP_TOUT_THRES : R/W ;bitpos:[18:9] ;default: 10'd50 ; */
/*description: reg_peri_backup_tout_thres.*/
#define APB_CTRL_PERI_BACKUP_TOUT_THRES    0x000003FF
#define APB_CTRL_PERI_BACKUP_TOUT_THRES_M  ((APB_CTRL_PERI_BACKUP_TOUT_THRES_V)<<(APB_CTRL_PERI_BACKUP_TOUT_THRES_S))
#define APB_CTRL_PERI_BACKUP_TOUT_THRES_V  0x3FF
#define APB_CTRL_PERI_BACKUP_TOUT_THRES_S  9
/* APB_CTRL_PERI_BACKUP_BURST_LIMIT : R/W ;bitpos:[8:4] ;default: 5'd8 ; */
/*description: reg_peri_backup_burst_limit.*/
#define APB_CTRL_PERI_BACKUP_BURST_LIMIT    0x0000001F
#define APB_CTRL_PERI_BACKUP_BURST_LIMIT_M  ((APB_CTRL_PERI_BACKUP_BURST_LIMIT_V)<<(APB_CTRL_PERI_BACKUP_BURST_LIMIT_S))
#define APB_CTRL_PERI_BACKUP_BURST_LIMIT_V  0x1F
#define APB_CTRL_PERI_BACKUP_BURST_LIMIT_S  4
/* APB_CTRL_PERI_BACKUP_FLOW_ERR : RO ;bitpos:[2:1] ;default: 2'd0 ; */
/*description: reg_peri_backup_flow_err.*/
#define APB_CTRL_PERI_BACKUP_FLOW_ERR    0x00000003
#define APB_CTRL_PERI_BACKUP_FLOW_ERR_M  ((APB_CTRL_PERI_BACKUP_FLOW_ERR_V)<<(APB_CTRL_PERI_BACKUP_FLOW_ERR_S))
#define APB_CTRL_PERI_BACKUP_FLOW_ERR_V  0x3
#define APB_CTRL_PERI_BACKUP_FLOW_ERR_S  1

#define APB_CTRL_PERI_BACKUP_APB_ADDR_REG          (DR_REG_SYSCON_BASE + 0xB8)
/* APB_CTRL_BACKUP_APB_START_ADDR : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reg_backup_apb_start_addr.*/
#define APB_CTRL_BACKUP_APB_START_ADDR    0xFFFFFFFF
#define APB_CTRL_BACKUP_APB_START_ADDR_M  ((APB_CTRL_BACKUP_APB_START_ADDR_V)<<(APB_CTRL_BACKUP_APB_START_ADDR_S))
#define APB_CTRL_BACKUP_APB_START_ADDR_V  0xFFFFFFFF
#define APB_CTRL_BACKUP_APB_START_ADDR_S  0

#define APB_CTRL_PERI_BACKUP_MEM_ADDR_REG          (DR_REG_SYSCON_BASE + 0xBC)
/* APB_CTRL_BACKUP_MEM_START_ADDR : R/W ;bitpos:[31:0] ;default: 32'd0 ; */
/*description: reg_backup_mem_start_addr.*/
#define APB_CTRL_BACKUP_MEM_START_ADDR    0xFFFFFFFF
#define APB_CTRL_BACKUP_MEM_START_ADDR_M  ((APB_CTRL_BACKUP_MEM_START_ADDR_V)<<(APB_CTRL_BACKUP_MEM_START_ADDR_S))
#define APB_CTRL_BACKUP_MEM_START_ADDR_V  0xFFFFFFFF
#define APB_CTRL_BACKUP_MEM_START_ADDR_S  0

#define APB_CTRL_PERI_BACKUP_INT_RAW_REG          (DR_REG_SYSCON_BASE + 0xC0)
/* APB_CTRL_PERI_BACKUP_ERR_INT_RAW : RO ;bitpos:[1] ;default: 1'd0 ; */
/*description: reg_peri_backup_err_int_raw.*/
#define APB_CTRL_PERI_BACKUP_ERR_INT_RAW    (BIT(1))
#define APB_CTRL_PERI_BACKUP_ERR_INT_RAW_M  (BIT(1))
#define APB_CTRL_PERI_BACKUP_ERR_INT_RAW_V  0x1
#define APB_CTRL_PERI_BACKUP_ERR_INT_RAW_S  1
/* APB_CTRL_PERI_BACKUP_DONE_INT_RAW : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: reg_peri_backup_done_int_raw.*/
#define APB_CTRL_PERI_BACKUP_DONE_INT_RAW    (BIT(0))
#define APB_CTRL_PERI_BACKUP_DONE_INT_RAW_M  (BIT(0))
#define APB_CTRL_PERI_BACKUP_DONE_INT_RAW_V  0x1
#define APB_CTRL_PERI_BACKUP_DONE_INT_RAW_S  0

#define APB_CTRL_PERI_BACKUP_INT_ST_REG          (DR_REG_SYSCON_BASE + 0xC4)
/* APB_CTRL_PERI_BACKUP_ERR_INT_ST : RO ;bitpos:[1] ;default: 1'd0 ; */
/*description: reg_peri_backup_err_int_st.*/
#define APB_CTRL_PERI_BACKUP_ERR_INT_ST    (BIT(1))
#define APB_CTRL_PERI_BACKUP_ERR_INT_ST_M  (BIT(1))
#define APB_CTRL_PERI_BACKUP_ERR_INT_ST_V  0x1
#define APB_CTRL_PERI_BACKUP_ERR_INT_ST_S  1
/* APB_CTRL_PERI_BACKUP_DONE_INT_ST : RO ;bitpos:[0] ;default: 1'd0 ; */
/*description: reg_peri_backup_done_int_st.*/
#define APB_CTRL_PERI_BACKUP_DONE_INT_ST    (BIT(0))
#define APB_CTRL_PERI_BACKUP_DONE_INT_ST_M  (BIT(0))
#define APB_CTRL_PERI_BACKUP_DONE_INT_ST_V  0x1
#define APB_CTRL_PERI_BACKUP_DONE_INT_ST_S  0

#define APB_CTRL_PERI_BACKUP_INT_ENA_REG          (DR_REG_SYSCON_BASE + 0xC8)
/* APB_CTRL_PERI_BACKUP_ERR_INT_ENA : R/W ;bitpos:[1] ;default: 1'd0 ; */
/*description: reg_peri_backup_err_int_ena.*/
#define APB_CTRL_PERI_BACKUP_ERR_INT_ENA    (BIT(1))
#define APB_CTRL_PERI_BACKUP_ERR_INT_ENA_M  (BIT(1))
#define APB_CTRL_PERI_BACKUP_ERR_INT_ENA_V  0x1
#define APB_CTRL_PERI_BACKUP_ERR_INT_ENA_S  1
/* APB_CTRL_PERI_BACKUP_DONE_INT_ENA : R/W ;bitpos:[0] ;default: 1'd0 ; */
/*description: reg_peri_backup_done_int_ena.*/
#define APB_CTRL_PERI_BACKUP_DONE_INT_ENA    (BIT(0))
#define APB_CTRL_PERI_BACKUP_DONE_INT_ENA_M  (BIT(0))
#define APB_CTRL_PERI_BACKUP_DONE_INT_ENA_V  0x1
#define APB_CTRL_PERI_BACKUP_DONE_INT_ENA_S  0

#define APB_CTRL_PERI_BACKUP_INT_CLR_REG          (DR_REG_SYSCON_BASE + 0xD0)
/* APB_CTRL_PERI_BACKUP_ERR_INT_CLR : WO ;bitpos:[1] ;default: 1'd0 ; */
/*description: reg_peri_backup_err_int_clr.*/
#define APB_CTRL_PERI_BACKUP_ERR_INT_CLR    (BIT(1))
#define APB_CTRL_PERI_BACKUP_ERR_INT_CLR_M  (BIT(1))
#define APB_CTRL_PERI_BACKUP_ERR_INT_CLR_V  0x1
#define APB_CTRL_PERI_BACKUP_ERR_INT_CLR_S  1
/* APB_CTRL_PERI_BACKUP_DONE_INT_CLR : WO ;bitpos:[0] ;default: 1'd0 ; */
/*description: reg_peri_backup_done_int_clr.*/
#define APB_CTRL_PERI_BACKUP_DONE_INT_CLR    (BIT(0))
#define APB_CTRL_PERI_BACKUP_DONE_INT_CLR_M  (BIT(0))
#define APB_CTRL_PERI_BACKUP_DONE_INT_CLR_V  0x1
#define APB_CTRL_PERI_BACKUP_DONE_INT_CLR_S  0

#define APB_CTRL_DATE_REG          (DR_REG_SYSCON_BASE + 0x3FC)
/* APB_CTRL_DATE : R/W ;bitpos:[31:0] ;default: 32'h2106080 ; */
/*description: reg_dateVersion control.*/
#define APB_CTRL_DATE    0xFFFFFFFF
#define APB_CTRL_DATE_M  ((APB_CTRL_DATE_V)<<(APB_CTRL_DATE_S))
#define APB_CTRL_DATE_V  0xFFFFFFFF
#define APB_CTRL_DATE_S  0


#ifdef __cplusplus
}
#endif



#endif /*_SOC_APB_CTRL_REG_H_ */