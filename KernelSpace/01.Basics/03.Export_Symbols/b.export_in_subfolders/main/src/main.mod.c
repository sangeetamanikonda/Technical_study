#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9412fa01, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9e829890, __VMLINUX_SYMBOL_STR(kern_mul) },
	{ 0x898e20aa, __VMLINUX_SYMBOL_STR(kern_sub) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x619f2ceb, __VMLINUX_SYMBOL_STR(kern_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kern_mul,kern_sub,kern_add";


MODULE_INFO(srcversion, "3CCF3302C795D3E2F04DE93");