obj-m =main.o add.o 
PWD= $(shell pwd)
SRC= /lib/modules/`uname -r`/build
MAKE= make -C

all: modules install

modules:
	$(MAKE) $(SRC) M=$(PWD) modules 

install:
	$(MAKE) $(SRC) M=$(PWD) modules_install 

clean:
	$(MAKE) $(SRC) M=$(PWD) clean 


