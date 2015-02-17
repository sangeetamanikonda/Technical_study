MAKE= make -C
CLEAN= make clean -C

SUBDIRS = add sub mul main

all: default
.PHONY: all

default:
	for n in $(SUBDIRS); do $(MAKE) $$n all; done;

.PHONY: clean 
clean: 
	for n in $(SUBDIRS); do $(CLEAN) $$n clean; done;




