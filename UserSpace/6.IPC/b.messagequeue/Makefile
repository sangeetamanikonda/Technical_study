TARGET1 = send
TARGET2 = receive
SRC1    = send.c
SRC2    = receive.c
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
