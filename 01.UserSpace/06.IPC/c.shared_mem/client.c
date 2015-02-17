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

  //Attach memory to user space
  if((shm=shmat(shmid,NULL,0)) == (void *)-1)
  {
    printf(" Could not attach to user space \n");
    exit(EXIT_FAILURE);
  }

  //Read from  memory until we reach NULL and update 1st character as '*'
    s = shm;

   printf(" Client: Reading from shared memory \n");

   while((*s)!=NULL)
   {
     printf(" %c",*s);    
     s++;
   }

    if (*s == NULL)
    *shm= '*';    

   puts("\n");
   return 0;
}
