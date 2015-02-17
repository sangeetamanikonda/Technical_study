obj-m = src/kern_sub.o
PWD= $(shell pwd)
SRC= /lib/modules/`uname -r`/build
MAKE= make -C

all: clean modules install

.PHONY: all

modules:
	$(MAKE) $(SRC) M=$(PWD) modules 

install:
	$(MAKE) $(SRC) M=$(PWD) modules_install 
	depmod -a ../$(shell pwd) 

.PHONY: clean 
clean:
	$(MAKE) $(SRC) M=$(PWD) clean 


