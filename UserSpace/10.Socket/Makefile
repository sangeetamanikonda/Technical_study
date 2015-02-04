CC    = gcc
CFLAGS= -o
RM    = rm -rf
TARGET1=server
TARGET2=client
OBJS= $(TARGET1) $(TARGET2)

all: $(OBJS)
.PHONY:all

$(TARGET1) : $(TARGET1).c
	$(CC) $(CFLAGS) $@ $< 

$(TARGET2) : $(TARGET2).c
	$(CC) $(CFLAGS) $@ $< 

.PHONY:clean
clean:
	$(RM) $(OBJS)
	
