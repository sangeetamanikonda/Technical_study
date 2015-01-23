TARGET1 = server 
TARGET2 = client
SRC1    = server.c
SRC2    = client.c
CC      = gcc
RM      = rm -rf 
CFLAGS  = -o

all : $(TARGET1) $(TARGET2)

$(TARGET1) : $(SRC1)
	$(CC) $(CFLAGS) $(TARGET1) $(SRC1)

$(TARGET2) : $(SRC2)
	$(CC) $(CFLAGS) $(TARGET2) $(SRC2) 

clean:
	$(RM) $(TARGET1) $(TARGET2)
