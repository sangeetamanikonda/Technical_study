#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>

MODULE_DESCRIPTION("ADDITION MODULE");
MODULE_AUTHOR("Sangeeta Manikonda");
MODULE_LICENSE("GPL");

int kern_add(int a,int b)
{
	return a+b;
}

static int __init add_init(void)
{
	printk(KERN_DEBUG "add_init : ");
	return 0;
}

static void __exit add_exit(void)
{
	printk(KERN_DEBUG "add_exit : Bye \n" );
}

module_init(add_init);
module_exit(add_exit);
EXPORT_SYMBOL(kern_add);
