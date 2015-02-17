#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

int main(){
  int mySocket, newSocket;
  char buffer[1024];
  struct sockaddr_in serverAddr;
  struct sockaddr_storage serverStorage;
  socklen_t addr_size;

  // Create the socket
  mySocket = socket(PF_INET, SOCK_STREAM, 0);
  
  //Configure settings of the server address struct ----
  //Address family = Internet 
  serverAddr.sin_family = AF_INET;
  // Set port number
  serverAddr.sin_port = htons(7891);
  //Set IP address to localhost 
  serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
  // Set all bits of the padding field to 0 
  memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);  

  //Bind the address struct to the socket
  bind(mySocket, (struct sockaddr *) &serverAddr, sizeof(serverAddr));

  // Listen on the socket, with 5 max connection requests queued 
  if(listen(mySocket,5)==0)
    printf("Listening\n");
  else
    printf("Error\n");

  // Accept call creates a new socket for the incoming connection 
  addr_size = sizeof serverStorage;
  newSocket = accept(mySocket, (struct sockaddr *) &serverStorage, &addr_size);

  // Send message to the socket of the incoming connection 
  strcpy(buffer,"Hello World\n");
  send(newSocket,buffer,13,0);
  return 0;
}
