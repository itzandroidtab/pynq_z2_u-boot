/*
 * (C) Copyright 2016 Digilent Inc.
 *
 * Configuration for Zynq Development Board - Pynq-Z2
 * See zynq-common.h for Zynq common configs
 *
 * SPDX-License-Identifier:	GPL-2.0
 */

#ifndef __CONFIG_ZYNQ_PYNQZ2_H
#define __CONFIG_ZYNQ_PYNQZ2_H

#define CONFIG_SYS_NO_FLASH

#define CONFIG_ZYNQ_USB
#define CONFIG_ZYNQ_I2C0
#define CONFIG_ZYNQ_I2C1
/*
#define CONFIG_SYS_I2C_EEPROM_ADDR_LEN	1
#define CONFIG_CMD_EEPROM
#define CONFIG_ZYNQ_GEM_EEPROM_ADDR	0x50
#define CONFIG_ZYNQ_GEM_I2C_MAC_OFFSET	0xFA
#define CONFIG_DISPLAY
#define CONFIG_I2C_EDID
*/

/* GEM MAC address offset */
#define CONFIG_ZYNQ_GEM_SPI_MAC_OFFSET	0x20

/* Define Pynq-Z1 PS Clock Frequency to 50MHz */
#define CONFIG_ZYNQ_PS_CLK_FREQ	50000000UL

#include <configs/zynq-common.h>

#endif /* __CONFIG_ZYNQ_PYNQZ2_H */