#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>

int glb_var; //Global variable

int main(void)
{
  pid_t PID;
  int ret;
  int lcl_var=0; // local variable

  //Create child process
  ret=fork();
  
  if(ret>0)
  {
    //Parent process
    glb_var=100;
    lcl_var=200;
    printf("\n Parent Process :  PID=%d",(int)getpid());
    printf("\n glb_var=%d lcl_var=%d\n\n",glb_var,lcl_var);
  }

  else if(ret==0)
  {
    //child process
    wait(0);
    glb_var++;
    lcl_var++;
    printf("\n Child process : PID=%d",(int)getpid());
    printf("\n glb_var=%d lcl_var=%d\n\n",glb_var,lcl_var);
  }
   
  else 
  {
    //error has occured
    exit(EXIT_FAILURE); 
  }

  return 0;
}
