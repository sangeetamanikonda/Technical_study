#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>

#include"add.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sangeeta Manikonda");
MODULE_DESCRIPTION("Driver Program :  main.c");

int a=10;
int b=10;

//init module: Function called when module is inserted
static int __init main_init(void)
{
  //Print all module parameters values
  printk(KERN_INFO "main_init : add=%d\n",add(a,b));
  return 0;
}

//exit module: Function called when module is removed
static void __exit main_exit(void)
{
  printk(KERN_INFO "main_exit : Bye bye\n");
}

 //Module parameter description used in modinfo : myint
 MODULE_PARM_DESC(a, "Integer Value");  
 module_param(a,int,S_IRUGO);          

 //Module parameter description used in modinfo : myint
 MODULE_PARM_DESC(b, "Integer Value");  
 module_param(b,int,S_IRUGO);          


  //MACRO called first after inserting module 
  module_init(main_init);
  //MACRO called first after removing module
  module_exit(main_exit); 
