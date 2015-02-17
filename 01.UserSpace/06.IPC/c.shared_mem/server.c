#include <sys/ipc.h>
#include <sys/shm.h>
#include<stdio.h>
#include<stdlib.h>

#define SHSZ 30

int main(void)
{

  key_t key=1234;
  int shmid;
  char *shm,c,*s;

  //Get shared memory 
  if((shmid=shmget(key,SHSZ,IPC_CREAT | 0666)) == -1) 
  {
    printf(" Could not get shared memory \n");
    exit(EXIT_FAILURE);
  }

  //Attach it to user space
  if((shm=shmat(shmid,NULL,0)) == (void *)-1)
  {
    printf(" Could not attach to user space \n");
    exit(EXIT_FAILURE);
  }

  printf("Server :  Writing into shared memory \n");

  //write into memory
    s = shm;

    for (c = 'a'; c <= 'z'; c++)
        *s++ = c;
    *s = NULL;

   //wait till first character changed by client program to '*'
    while (*shm != '*')
        sleep(1);

   return 0;
}
