#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>
#include"../include/kern_add.h"
#include"../include/kern_sub.h"
#include"../include/kern_mul.h"

MODULE_DESCRIPTION("Driver Program");
MODULE_AUTHOR("Sangeeta Manikonda");
MODULE_LICENSE("GPL");

static int a=10;
static int b=10;


static int __init main_init(void)
{
	printk(KERN_INFO "\nmain_init : sum=%d\n",kern_add(a,b));
	printk(KERN_INFO "\nmain_init : diff=%d\n",kern_sub(a,b));
	printk(KERN_INFO "\nmain_init : mul=%d\n",kern_mul(a,b));
	return 0;
}

static void __exit main_exit(void)
{
	printk(KERN_INFO "main_exit : Bye \n" );
}

module_init(main_init);
module_exit(main_exit);
module_param(a,int,S_IRUGO);
module_param(b,int,S_IRUGO);
