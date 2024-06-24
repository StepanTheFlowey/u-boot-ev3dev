/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2016 David Lechner <david@lechnology.com>
 *
 * Based on da850evm.h
 *
 * Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
 *
 * Based on davinci_dvevm.h. Original Copyrights follow:
 *
 * Copyright (C) 2007 Sergey Kubushyn <ksi@koi8.net>
 */

#ifndef __CONFIG_H
#define __CONFIG_H

/*
 * SoC Configuration
 */
#define CFG_SYS_EXCEPTION_VECTORS_HIGH
#define CFG_SYS_OSCIN_FREQ		24000000
#define CFG_SYS_TIMERBASE		DAVINCI_TIMER0_BASE
#define CFG_SYS_HZ_CLOCK		clk_get(DAVINCI_AUXCLK_CLKID)

/*
 * Memory Info
 */
#define PHYS_SDRAM_1		DAVINCI_DDR_EMIF_DATA_BASE /* DDR Start */
#define PHYS_SDRAM_1_SIZE	(64 << 20) /* SDRAM size 64MB */
#define CFG_MAX_RAM_BANK_SIZE (512 << 20) /* max size from SPRS586*/

/*
 * Serial Driver info
 */
#define CFG_SYS_NS16550_CLK	clk_get(DAVINCI_UART2_CLKID)

#define CFG_SYS_SPI_CLK		clk_get(DAVINCI_SPI0_CLKID)

/*
 * Linux Information
 */
#define LINUX_BOOT_PARAM_ADDR	(PHYS_SDRAM_1 + 0x100)
#define CFG_EXTRA_ENV_SETTINGS \
	"memsize=64M\0" \
	"devtype=mmc\0" \
	"devnum=0\0" \
	"bootpart=1\0" \
	"distro_bootpart=2\0" \
	"prefix=/boot/\0" \
	"bootscr_addr=0xc0700000\0" \
	"fdt_addr_r=0xc0600000\0" \
	"kernel_addr_r=0xc0007fc0\0" \
	"ramdisk_addr_r=0xc1180000\0"

/* additions for new relocation code, must added to all boards */
#define CFG_SYS_SDRAM_BASE		0xc0000000

#include <asm/arch/hardware.h>

#endif /* __CONFIG_H */
