/*
 * (C) Copyright 2010 Mistral Solutions Pvt Ltd. <www.mistralsolutions.com>
 * Umesh Krishnan <umeshk@mistralsolutions.com>
 *
 * Header file for board/am3517crane/am3517crane.c
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#define MAX_SIL_INDEX	3

/* Definitions for EMIF4 configuration values */
#define	EMIF4_TIM1_T_RP		0x3
#define	EMIF4_TIM1_T_RCD	0x3
#define	EMIF4_TIM1_T_WR		0x3
#define	EMIF4_TIM1_T_RAS	0x8
#define	EMIF4_TIM1_T_RC		0xA
#define	EMIF4_TIM1_T_RRD	0x2
#define	EMIF4_TIM1_T_WTR	0x2

#define	EMIF4_TIM2_T_XP		0x2
#define	EMIF4_TIM2_T_ODT	0x0
#define	EMIF4_TIM2_T_XSNR	0x1C
#define	EMIF4_TIM2_T_XSRD	0xC8
#define	EMIF4_TIM2_T_RTP	0x1
#define	EMIF4_TIM2_T_CKE	0x2

#define	EMIF4_TIM3_T_TDQSCKMAX	0x0
#define	EMIF4_TIM3_T_RFC	0x25
#define	EMIF4_TIM3_T_RAS_MAX	0x7

#define	EMIF4_PWR_IDLE		0x2
#define	EMIF4_PWR_DPD_EN	0x0
#define	EMIF4_PWR_PM_EN		0x0
#define	EMIF4_PWR_PM_TIM	0x0

#define	EMIF4_INITREF_DIS	0x0
#define	EMIF4_PASR		0x0
#define	EMIF4_REFRESH_RATE	0x50F

/*
 * SDRAM Config register
 */
#define	EMIF4_CFG_SDRAM_TYP	0x2
#define	EMIF4_CFG_IBANK_POS	0x0
#define	EMIF4_CFG_DDR_TERM	0x0
#define	EMIF4_CFG_DDR2_DDQS	0x1
#define	EMIF4_CFG_DYN_ODT	0x0
#define	EMIF4_CFG_DDR_DIS_DLL	0x0
#define	EMIF4_CFG_SDR_DRV	0x0
#define	EMIF4_CFG_CWL		0x0
#define	EMIF4_CFG_NARROW_MD	0x0
#define	EMIF4_CFG_CL		0x5
#define	EMIF4_CFG_ROWSIZE	0x0
#define	EMIF4_CFG_IBANK		0x3
#define	EMIF4_CFG_EBANK		0x0
#define	EMIF4_CFG_PGSIZE	0x2

/*
 * EMIF4 PHY Control 1 register configuration
 */
#define EMIF4_DDR1_RD_LAT	0x6
#define	EMIF4_DDR1_PWRDN_DIS	0x0
#define EMIF4_DDR1_STRBEN_EXT	0x0
#define EMIF4_DDR1_DLL_MODE	0x0
#define EMIF4_DDR1_VTP_DYN	0x0
#define EMIF4_DDR1_LB_CK_SEL	0x0

/*
 * EMIF4 PHY Control 2 register configuration
 */
#define EMIF4_DDR2_TX_DATA_ALIGN	0x0
#define EMIF4_DDR2_RX_DLL_BYPASS	0x0

/* Following functions are exported from lowlevel_init.S */
extern struct dpll_param *get_mpu_dpll_param(void);
extern struct dpll_param *get_core_dpll_param(void);
extern struct dpll_param *get_per_dpll_param(void);

extern int mmc_init(int verbose);
extern block_dev_desc_t *mmc_get_dev(int dev);

#define __raw_readl(a)    (*(volatile unsigned int *)(a))
#define __raw_writel(v, a) (*(volatile unsigned int *)(a) = (v))
#define __raw_readw(a)    (*(volatile unsigned short *)(a))
#define __raw_writew(v, a) (*(volatile unsigned short *)(a) = (v))

