#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include"add.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sangeeta Manikonda");
MODULE_DESCRIPTION("Addition program");
EXPORT_SYMBOL(add); 

static int add(int a, int b)
{
  return a+b;
}

//init module: Function called when module is inserted
static int __init add_init(void)
{
  //Print all module parameters values
  printk(KERN_INFO "\nadd_init :\n ");
  return 0;
}

//exit module: Function called when module is removed
static void __exit add_exit(void)
{
  printk(KERN_INFO "\nadd_exit : Bye bye\n");
}


  //MACRO called first after inserting module 
  module_init(add_init);
  //MACRO called first after removing module
  module_exit(add_exit);
