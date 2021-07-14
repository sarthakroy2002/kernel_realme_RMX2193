#include <linux/kernel.h>
#include <linux/bug.h>
#include <linux/clk.h>
#include <linux/io.h>
#include <uapi/linux/input-event-codes.h>

#include <linux/oppo_key_handle.h>

extern int tplg_open;

void __attribute__((unused)) tplg_process(struct input_dev *dev, int key, int val)
{
	char *env[2] = {"TPLG_STATUS=ON", NULL};
	if (tplg_open == 0) {
		tplg_open = 1;
		pr_info("vol_key_password tplg_door_open \n");
		if(kobject_uevent_env(&dev->dev.kobj, KOBJ_CHANGE, env)) {
			pr_err("tplg open uevent failed!");
		}
	}
}


void __attribute__((unused)) tplg_post_process(struct input_dev *dev, int key, int val)
{
	if (tplg_open) {
		// TO DO if needed
	}
}