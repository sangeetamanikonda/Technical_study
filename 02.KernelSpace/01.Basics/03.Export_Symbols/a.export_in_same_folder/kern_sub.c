#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>

MODULE_DESCRIPTION("SUBTRACTION MODULE");
MODULE_AUTHOR("Sangeeta Manikonda");
MODULE_LICENSE("GPL");

int kern_sub(int a,int b)
{
	return a-b;
}

static int __init sub_init(void)
{
	printk(KERN_DEBUG "sub_init : \n");
	return 0;
}

static void __exit sub_exit(void)
{
	printk(KERN_DEBUG "sub_exit : Bye \n" );
}

module_init(sub_init);
module_exit(sub_exit);
EXPORT_SYMBOL(kern_sub);
