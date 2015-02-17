#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<pthread.h>
#define NUM_OF_THREADS 5 //Number of threads

int glb_var;

//pthread_t callThd[NUM_OF_THREADS];
pthread_mutex_t mutexinc;  //mutex 

void *PrintID()
{
   //mutex_lock for synchronization
   pthread_mutex_lock(&mutexinc);           
   //Increment thread count, print thread id and thread count
   printf(" glb_var=%d  TID=%ld\n",++glb_var,pthread_self());  
   //mutex unlock for synchronization
   pthread_mutex_unlock(&mutexinc);           
 
   //exit
   pthread_exit(NULL); 
}

int main(void)
{
  pthread_t threads[NUM_OF_THREADS];
  int ret,i;
  
  //Initialize mutex
   pthread_mutex_init(&mutexinc, NULL);
  
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

  //Termination procedure for mutex and pthread
  pthread_mutex_destroy(&mutexinc);
  pthread_exit(NULL); 
  return 0;
}
