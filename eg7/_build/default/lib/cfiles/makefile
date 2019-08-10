CC=gcc
CFLAGS=-I.
DEPS = mylib.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

clibrary.so: lib.o sec_lib.o
	$(CC) -shared -o clibrary.so lib.o sec_lib.o
	
clibrary.a: lib.o sec_lib.o
	ar -crv clibrary.a lib.o sec_lib.o
	
clibrary: lib.o sec_lib.o 
	$(CC) -c lib.o sec_lib.o
	

