/*
 * Copyright (C), 2019, OPPO Mobile Comm Corp., Ltd.
 * VENDOR_EDIT
 * File: - linux/oppo_key_handle.h
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
#include <linux/kobject.h>
#include <linux/input.h>

extern void __attribute__((unused)) get_fdump_passwd(const char *val);
extern void __attribute__((unused)) get_tplg_passwd(const char *val);

extern void __attribute__((unused)) OPPO_DUMP(const char s[24]);
extern void __attribute__((unused)) dump_process(int key, int val);
extern void __attribute__((unused)) dump_post_process(int key, int val);
extern void __attribute__((unused)) tplg_process(struct input_dev *dev, int key, int val);
extern void __attribute__((unused)) tplg_post_process(struct input_dev *dev, int key, int val);
extern void __attribute__((unused)) oppo_key_event(struct input_dev *dev, int type, int key, int val);
extern void __attribute__((unused)) oppo_key_process(struct input_dev *dev, int key, int val);

