/*
 * Copyright (C), 2019, OPPO Mobile Comm Corp., Ltd.
 * VENDOR_EDIT
 * File: - oppo_dump/force_dump.c
 * Description: Util about dump in the period of debugging.
 * Version: 1.0
 * Date: 2019/11/01
 * Author: Bin.Xu@BSP.Kernel.Stability
 *
 *----------------------Revision History: ---------------------------
 *   <author>        <date>         <version>         <desc>
 *    Bin.Xu       2019/11/01        1.0              created
 *-------------------------------------------------------------------
 */
#include <linux/oppo_key_handle.h>

extern int door_open;

void __attribute__((unused)) dump_process(int key, int val)
{
	if (door_open == 0) {
		pr_info("vol_key_password dump_door_open \n");
		door_open = 1;
	}
}

void __attribute__((unused)) dump_post_process(int key, int val)
{
	if (door_open) {
		// TO DO if needed
	}
}