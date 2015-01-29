#include"mean.h"
#include"add.h"
#include<stdio.h>

int main(void)
{
  double a=2.2;  
  double b=4.4;

  //get mean value either using static or shared library
  printf("\n\n Result: \n a=%0.2F  b=%0.2F \n Mean=%0.2F\n",a,b,get_mean(a,b));
  printf(" Sum=%0.2F \n\n",get_sum(a,b));
  return 0;
}

