#include<stdio.h>
#include<linux/signal.h>

//SIGALRM handler
void ALRM_handler(int signo)
{
  //Ignore SIGALRM
  signal(SIGINT,SIG_IGN);  

  if (signo == SIGALRM)
    printf(" \t Received SIG_ALRM\n");
}

int main(void)
{
  //SIGINT default registration
  signal(SIGINT,SIG_DFL);

  //SIGALRM Registration
  signal(SIGALRM,ALRM_handler);
  alarm(5);

  //Continue until signal is received
  while(1) 
  {
    sleep(25);
    printf("\n Waiting for signal...");
  }  

  return 0;
}
