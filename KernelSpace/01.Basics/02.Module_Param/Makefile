obj-m+=module_param.o
PWD= $(shell pwd)
SRC= /lib/modules/`uname -r`/build
MAKE= make -C

all: modules

modules:
	$(MAKE) $(SRC) M=$(PWD) modules 


clean:
	$(MAKE) $(SRC) M=$(PWD) clean 


