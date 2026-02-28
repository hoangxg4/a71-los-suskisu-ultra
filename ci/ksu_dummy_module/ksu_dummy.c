#include <linux/init.h>
#include <linux/module.h>

static int __init ksu_dummy_init(void)
{
	return 0;
}

static void __exit ksu_dummy_exit(void)
{
}

module_init(ksu_dummy_init);
module_exit(ksu_dummy_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Dummy module for Android kernel build action");
