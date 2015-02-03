MAKE= make -C
MAKE_CLEAN=make clean -C
PWD=$(shell pwd)

#PATH of subdirectories each containing Makefiles
LIBPATH=$(PWD)/1.lib
FORKPATH=$(PWD)/2.fork
THREADPATH=$(PWD)/3.thread
SIGNALPATH=$(PWD)/4.signal
SYNCPATH=$(PWD)/5.Synchronization
PIPEPATH=$(PWD)/6.IPC/a.pipes
MESSQPATH=$(PWD)/6.IPC/b.messagequeue
SHAREDMEMPATH=$(PWD)/6.IPC/c.shared_mem
SYSCALLPATH=$(PWD)/7.System_call
RECPATH= $(shell pwd)/8.Makefile_Recursion

#make will call Makefile of each of the sub directories
all: lib fork thread signal sync pipe messageq sharedmem syscall reclib 
.PHONY: all 

lib:
	$(MAKE) $(LIBPATH)

fork:
	$(MAKE) $(FORKPATH)

thread:
	$(MAKE) $(THREADPATH)

signal:
	$(MAKE) $(SIGNALPATH)

sync:
	$(MAKE) $(SYNCPATH)

pipe:
	$(MAKE) $(PIPEPATH)

messageq:
	$(MAKE) $(MESSQPATH)

sharedmem:
	$(MAKE) $(SHAREDMEMPATH)


syscall:
	$(MAKE) $(SYSCALLPATH)
	

reclib:
	$(MAKE) $(RECPATH)


#make clean will remove binaries of all the subdirectories
.PHONY: clean 
clean:  clean_lib clean_fork clean_thread clean_signal clean_sync clean_pipe clean_messageq clean_sharedmem clean_syscall clean_rec 

clean_lib:
	$(MAKE_CLEAN) $(LIBPATH)

clean_fork:
	$(MAKE_CLEAN) $(FORKPATH)

clean_thread:
	$(MAKE_CLEAN) $(THREADPATH)

clean_signal:
	$(MAKE_CLEAN) $(SIGNALPATH)

clean_sync:
	$(MAKE_CLEAN) $(SYNCPATH)

clean_pipe:
	$(MAKE_CLEAN) $(PIPEPATH)

clean_messageq:
	$(MAKE_CLEAN) $(MESSQPATH)

clean_sharedmem:
	$(MAKE_CLEAN) $(SHAREDMEMPATH)

clean_syscall:
	$(MAKE_CLEAN) $(SYSCALLPATH)

clean_rec:
	$(MAKE_CLEAN) $(RECPATH)
	
	
