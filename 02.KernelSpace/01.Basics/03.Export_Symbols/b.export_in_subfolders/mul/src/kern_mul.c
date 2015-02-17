#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>

MODULE_DESCRIPTION("Multplication MODULE");
MODULE_AUTHOR("Sangeeta Manikonda");
MODULE_LICENSE("GPL");

int kern_mul(int a,int b)
{
	return a*b;
}

static int __init mul_init(void)
{
	printk(KERN_DEBUG "\nmul_init : \n");
	return 0;
}

static void __exit mul_exit(void)
{
	printk(KERN_DEBUG "mul_exit : Bye \n" );
}

module_init(mul_init);
module_exit(mul_exit);
EXPORT_SYMBOL_GPL(kern_mul);
