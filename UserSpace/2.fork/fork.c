#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>

int glb_var;

int main(void)
{
  pid_t PID;
  int ret,i;
  int lcl_var=0;

  ret=fork();
  
  if(ret>0)
  {
    glb_var=100;
    lcl_var=200;
    printf("\n Parent Process :  PID=%d",(int)getpid());
    printf("\n glb_var=%d lcl_var=%d\n\n",glb_var,lcl_var);
  }

  else if(ret==0)
  {
    wait(0);
    glb_var++;
    lcl_var++;
    printf("\n Child process : PID=%d",(int)getpid());
    printf("\n glb_var=%d lcl_var=%d\n\n",glb_var,lcl_var);
  }
   
  else 
  {
    exit(EXIT_FAILURE); 
  }

  return 0;
}
