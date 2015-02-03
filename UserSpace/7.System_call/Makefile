CC     = gcc
SRC    = user.c
TARGET = user
RM     = rm -rf
CFLAGS = -o 

all: $(TARGET) 
.PHONY:all

$(TARGET) : $(SRC)
	$(CC) $(CFLAGS) $@ $<

.PHONY:clean
clean:
	$(RM) $(TARGET) 


