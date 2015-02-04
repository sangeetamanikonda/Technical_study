MAKE= make -C
MAKE_CLEAN=make clean -C
PWD=$(shell pwd)

#PATH of subdirectories each containing Makefiles
LIBPATH=$(PWD)/1.lib
FORKPATH=$(PWD)/2.fork
THREADPATH=$(PWD)/3.thread
SIGNALPATH=$(PWD)/4.signal
BINSYNCPATH=$(PWD)/5.Synchronization/a.binary_sem
COUNTSYNCPATH=$(PWD)/5.Synchronization/b.counting_sem
PIPEPATH=$(PWD)/6.IPC/a.pipes
MESSQPATH=$(PWD)/6.IPC/b.messagequeue
SHAREDMEMPATH=$(PWD)/6.IPC/c.shared_mem
SYSCALLPATH=$(PWD)/7.System_call
RECPATH= $(shell pwd)/8.Makefile_Recursion
SOCKETPATH= $(shell pwd)/10.Socket

#make will call Makefile of each of the sub directories
all: lib fork thread signal binsync countsync pipe messageq sharedmem syscall reclib socket 
.PHONY: all 

lib:
	$(MAKE) $(LIBPATH)

fork:
	$(MAKE) $(FORKPATH)

thread:
	$(MAKE) $(THREADPATH)

signal:
	$(MAKE) $(SIGNALPATH)

binsync:
	$(MAKE) $(BINSYNCPATH)

countsync:
	$(MAKE) $(COUNTSYNCPATH)

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

socket:
	$(MAKE) $(SOCKETPATH)

#make clean will remove binaries of all the subdirectories
.PHONY: clean 
clean:  clean_lib clean_fork clean_thread clean_signal clean_binsync clean_countsync clean_pipe \
	clean_messageq clean_sharedmem clean_syscall clean_rec  clean_socket

clean_lib:
	$(MAKE_CLEAN) $(LIBPATH)

clean_fork:
	$(MAKE_CLEAN) $(FORKPATH)

clean_thread:
	$(MAKE_CLEAN) $(THREADPATH)

clean_signal:
	$(MAKE_CLEAN) $(SIGNALPATH)

clean_binsync:
	$(MAKE_CLEAN) $(BINSYNCPATH)

clean_countsync:
	$(MAKE_CLEAN) $(COUNTSYNCPATH)

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

clean_socket:
	$(MAKE_CLEAN) $(SOCKETPATH)
	
	
