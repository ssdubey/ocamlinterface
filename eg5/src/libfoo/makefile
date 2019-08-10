CC=gcc
CFLAGS=-I.
DEPS = mylib.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

mylibrary: mylib.o mystub.o 
	$(CC) -c -o mylibrary mylib.o
	ar -crv mylib.a mylib.o
