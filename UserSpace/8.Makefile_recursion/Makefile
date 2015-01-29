MAKE= make -w
DYN_PATH= $(shell pwd)/a.dynamic
STAT_PATH= $(shell pwd)/b.static

all: Dynamic Static
.PHONY: all

Dynamic:
	$(MAKE) -C  $(DYN_PATH)	
Static:
	$(MAKE) -C $(STAT_PATH)

.PHONY: clean  
clean :clean_static clean_dynamic
clean_static:
	cd $(STAT_PATH) && make clean	

clean_dynamic:
	cd $(DYN_PATH) && make clean
