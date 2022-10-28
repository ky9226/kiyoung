#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xc2a194f5, "module_layout" },
	{ 0xbab76897, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x1bcd1cdc, "class_destroy" },
	{ 0xd8bb65d6, "device_destroy" },
	{ 0x1968a16, "gpiod_direction_input" },
	{ 0xfe990052, "gpio_free" },
	{ 0x96d4cdbc, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x2cac7900, "cdev_add" },
	{ 0xe8c43040, "cdev_init" },
	{ 0x3c8a0e89, "device_create" },
	{ 0x71148895, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x1f64fd19, "gpiod_get_raw_value" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0xd472d34d, "gpiod_set_raw_value" },
	{ 0x18910b35, "gpio_to_desc" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x92997ed8, "_printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "32971F6DC34145B88F95B20");
