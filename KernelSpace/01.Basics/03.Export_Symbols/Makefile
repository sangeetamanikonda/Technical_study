obj-m =main.o kern_add.o kern_sub.o kern_mul.o
PWD= $(shell pwd)
SRC= /lib/modules/`uname -r`/build
MAKE= make -C

all: clean modules install

.PHONY: all

modules:
	$(MAKE) $(SRC) M=$(PWD) modules 

install:
	$(MAKE) $(SRC) M=$(PWD) modules_install 
	depmod -a 

.PHONY: clean 
clean:
	$(MAKE) $(SRC) M=$(PWD) clean 


