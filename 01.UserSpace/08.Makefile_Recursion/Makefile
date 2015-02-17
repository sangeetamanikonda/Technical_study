MAKE= make -C
STATICPATH= $(shell pwd)/a.static
DYNAMICPATH= $(shell pwd)/b.dynamic
MAKE_CLEAN=make clean -C

all: staticlib dynamiclib
.PHONY: all 

staticlib:
	$(MAKE) $(STATICPATH)

dynamiclib:
	$(MAKE) $(DYNAMICPATH)

.PHONY: clean 
clean: clean_static clean_dynamic

clean_static:
	$(MAKE_CLEAN) $(STATICPATH)
	
clean_dynamic:
	$(MAKE_CLEAN) $(DYNAMICPATH)
	
