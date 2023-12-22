/*
 * Copyright (c) 2019-2022, Intel Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef AGX_PINMUX_H
#define AGX_PINMUX_H

#define AGX_PINMUX_BASE					0xffd13000
#define AGX_PINMUX_PIN0SEL				(AGX_PINMUX_BASE + 0x000)
#define AGX_PINMUX_IO0CTRL				(AGX_PINMUX_BASE + 0x130)
#define AGX_PINMUX_EMAC0_USEFPGA			(AGX_PINMUX_BASE + 0x300)
#define AGX_PINMUX_EMAC1_USEFPGA			(AGX_PINMUX_BASE + 0x304)
#define AGX_PINMUX_EMAC2_USEFPGA			(AGX_PINMUX_BASE + 0x308)
#define AGX_PINMUX_NAND_USEFPGA				(AGX_PINMUX_BASE + 0x320)
#define AGX_PINMUX_SPIM0_USEFPGA			(AGX_PINMUX_BASE + 0x328)
#define AGX_PINMUX_SPIM1_USEFPGA			(AGX_PINMUX_BASE + 0x32c)
#define AGX_PINMUX_SDMMC_USEFPGA			(AGX_PINMUX_BASE + 0x354)
#define AGX_PINMUX_IO0_DELAY				(AGX_PINMUX_BASE + 0x400)

#define AGX_PINMUX_NAND_USEFPGA_VAL			BIT(4)
#define AGX_PINMUX_SDMMC_USEFPGA_VAL			BIT(8)
#define AGX_PINMUX_SPIM0_USEFPGA_VAL			BIT(16)
#define AGX_PINMUX_SPIM1_USEFPGA_VAL			BIT(24)
#define AGX_PINMUX_EMAC0_USEFPGA_VAL			BIT(0)
#define AGX_PINMUX_EMAC1_USEFPGA_VAL			BIT(8)
#define AGX_PINMUX_EMAC2_USEFPGA_VAL			BIT(16)

#include "socfpga_handoff.h"

void config_pinmux(handoff *handoff);

#endif
