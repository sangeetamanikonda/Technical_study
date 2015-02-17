#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sangeeta Manikonda");
MODULE_DESCRIPTION("Hello World program");

//init module: Function called when module is inserted
static int __init hello_init(void)
{
	printk(KERN_INFO "hello_init : Hello World\n");
	return 0;
}

//exit module: Function called when module is removed
static void __exit hello_exit(void)
{
	printk(KERN_INFO "hello_exit : Bye bye\n");
}

module_init(hello_init); //MACRO called first after inserting module 
module_exit(hello_exit); //MACRO called first after removing module
