liboresmod.so: liboresmod.o
	gcc -m32 -shared -nostartfiles -o liboresmod.so liboresmod.o -ldl -lX11

liboresmod.o: liboresmod.c
	gcc -m32 -Wall -fpic -g -c liboresmod.c

clean:
	rm -f *.o *.so
