CC = gcc
CFLAGS = -o
TARGET = thread 
SRC = thread.c 
LIBTHREAD = -lpthread 
RM = rm -rf

all: $(TARGET) 

$(TARGET) : $(SRC)
	$(CC) $(CFLAGS) $(TARGET) $(SRC) $(LIBTHREAD)
	./$(TARGET)

clean:
	$(RM) $(TARGET)
