#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#define NUM_OF_THREADS 5 //Number of threads

int glb_var;
sem_t seminc;  //semaphore 

void *PrintID()
{
   //lock for synchronization
   sem_wait(&seminc);           
   //Increment thread count, print thread id and thread count
   printf(" glb_var=%d  TID=%ld\n",++glb_var,pthread_self());  
   //unlock for synchronization
   sem_post(&seminc);           
 
   //exit
   pthread_exit(NULL); 
}

int main(void)
{
  pthread_t threads[NUM_OF_THREADS];
  int ret,i;
  
  //Initialize semaphore
   sem_init(&seminc,0,1); //1 is initial value for synchronization
  
  for(i=0;i<NUM_OF_THREADS;i++)
  {
    //create thread
    ret=pthread_create(&threads[i],NULL,(void *)PrintID,NULL);
    if(ret)
    {
      //error
      printf("\n Error has occured unable to create thread\n");	
      exit(EXIT_FAILURE);
    }
  }

  //Termination procedure for semaphore and pthread
  sem_destroy(&seminc);
  pthread_exit(NULL); 
  return 0;
}
