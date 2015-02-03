CC     = gcc
SRC    = pipe_ex.c
TARGET = pipe_ex
RM     = rm -rf
CFLAGS = -o 

all: $(TARGET) 
.PHONY:all

$(TARGET) : $(SRC)
	$(CC) $(CFLAGS) $@ $<

.PHONY:clean
clean:
	$(RM) $(TARGET) 


