#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int len,len2;

//Buffers for sending and receiving data
char *rbuff,*wbuff;
char *rbuff2,*wbuff2;

void UserInput()
{

  //Take from user message length (child to parent)
  printf("Enter length of message:(Child to parent) \n");
  scanf("%d",&len);

  //Allocate memory 
  rbuff=(char *)malloc(len);
  wbuff=(char *)malloc(len);

  //Take from user message(child to parent)
  printf("Enter message: (child to parent)\n");
  scanf("%s",wbuff);

  //Take from user message length (parent to child)
  printf("Enter length of message:(Child to parent) \n");
  scanf("%d",&len2);

  //Allocate memory 
  rbuff2=(char *)malloc(len2);
  wbuff2=(char *)malloc(len2);

  //Take from user message(parent to child)
  printf("Enter message: (parent to child)\n");
  scanf("%s",wbuff2);

}

int main(void)
{
  int fd[2],fd2[2];
  int ret=0;
 
   UserInput();
 
  //Create pipe1
  ret=pipe(fd); 
  if(ret<0)
  { 
    exit(EXIT_FAILURE);
  }  
 
  //Create pipe2
  ret=pipe(fd2); 
  if(ret<0)
  {
    exit(EXIT_FAILURE);
  }  

  //Create child process 
  ret=fork();      

  //Child process : Write message to parent and then read message from parent.
  if(ret==0)
  {
    close(fd[0]);
    write(fd[1],wbuff,strlen(wbuff));
    close(fd2[1]);
    read(fd2[0],rbuff2,strlen(wbuff2));
    printf("Child process : %s \n",rbuff2); 
  }

  //Parent process : Read message from child and then write message to parent.
  else if(ret > 0)
  {
    close(fd[1]);
    read(fd[0],rbuff,strlen(wbuff));
    printf("Parent process : %s \n",rbuff); 
    close(fd2[0]);
    write(fd2[1],wbuff2,strlen(wbuff2));
  }  

  else
  exit(EXIT_FAILURE);
  
  return 0;
}  
