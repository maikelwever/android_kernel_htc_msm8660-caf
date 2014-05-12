/* arch/arm/mach-msm/include/mach/board-ext-htc.h
 *
 * HTC board.h extensions
 *
 * Copyright (C) 2013 CyanogenMod
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ASM_ARCH_MSM_BOARD_EXT_HTC_H
#define __ASM_ARCH_MSM_BOARD_EXT_HTC_H

extern struct flash_platform_data msm_nand_data;

extern int get_partition_num_by_name(char *name);
extern const char *get_partition_name_by_num(int partnum);

#endif /* __ASM_ARCH_MSM_BOARD_EXT_HTC_H */
