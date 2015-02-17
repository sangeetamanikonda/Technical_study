
#Instead of using ../include/<header_name> add below path.
EXTRA_CFLAGS += -I$(PWD)/../include

#To add symbols of submodules, that are to be used by main module.
PATH_ADD= $(PWD)/../add/Module.symvers
PATH_SUB= $(PWD)/../sub/Module.symvers
PATH_MUL= $(PWD)/../mul/Module.symvers
KBUILD_EXTRA_SYMBOLS := $(PATH_ADD) $(PATH_SUB) $(PATH_MUL)

ifneq ($(KERNELRELEASE),)
        obj-m += src/main.o
else
        KERNDIR := /lib/modules/$(shell uname -r)/build
        PWD := $(shell pwd)

all: modules install

modules:
	$(MAKE) -C $(KERNDIR) M=$(PWD) modules
install:
	$(MAKE) -C $(KERNDIR) M=$(PWD) modules_install
	depmod -a ../$(shell pwd)

clean:
	$(MAKE) -C $(KERNDIR) M=$(PWD) clean
endif
