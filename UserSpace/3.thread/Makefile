CC = gcc
CFLAGS = -o
LIBFLAG= -lpthread
TARGET = thread
RM = rm -rf

all: $(TARGET) 

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) $(TARGET) $(TARGET).c $(LIBFLAG)
	./$(TARGET)

clean:
	$(RM) $(TARGET)
