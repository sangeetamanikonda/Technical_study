#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>

#define ARR_INDEX 4

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sangeeta Manikonda");
MODULE_DESCRIPTION("Module Parameters program");

static int myint=10;
static short myshort=100;
static long mylong=101;
static char *mychar="sang";
static int myarray[ARR_INDEX]={1,2,3,4};
static int index=ARR_INDEX;

//init module: Function called when module is inserted
static int __init module_param_init(void)
{
  //Print all module parameters values
  printk(KERN_INFO "module_param_init : myint=%d\n",myint);
  printk(KERN_INFO "module_param_init : myshort=%hd\n",myshort);
  printk(KERN_INFO "module_param_init : mylong=%ld\n",mylong);
  printk(KERN_INFO "module_param_init : mychar=%s\n",mychar);
  printk(KERN_INFO "module_param_init : myarray[2]=%d\n",myarray[2]);
  return 0;
}

//exit module: Function called when module is removed
static void __exit module_param_exit(void)
{
  printk(KERN_INFO "module_param_exit : Bye bye\n");
}

 //Module parameter description used in modinfo : myint
 MODULE_PARM_DESC(myint, "Integer Value");  
 module_param(myint,int,S_IRUGO);          

 //Module parameter : myshort
 MODULE_PARM_DESC(myshort, "Short Value");  
 module_param(myshort,short,S_IRUGO);          

 //Module parameter : mylong
 MODULE_PARM_DESC(myshort, "Long Value");  
 module_param(mylong,long,S_IRUGO);      
    
 //Module parameter : mychar
 MODULE_PARM_DESC(mychar, "Char pointer Value");
 module_param(mychar,charp,S_IRUGO);

 //Module parameter : myarray
 MODULE_PARM_DESC(myarray, "Array Value");		 
 module_param_array(myarray,int,&index,S_IRUGO);            

  //MACRO called first after inserting module 
  module_init(module_param_init);
  //MACRO called first after removing module
  module_exit(module_param_exit); 
