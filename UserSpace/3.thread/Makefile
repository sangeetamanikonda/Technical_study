CC = gcc
CFLAGS = -o
TARGET = thread 
SRC = thread.c 
LIBTHREAD = -lpthread 
RM = rm -rf

all: $(TARGET) 
.PHONY: all
$(TARGET) : $(SRC) 
	$(CC) $(CFLAGS) $@ $< $(LIBTHREAD)

.PHONY:clean
clean:
	$(RM) $(TARGET)
