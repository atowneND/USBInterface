all: test

test: test.o myfun.o
	gcc -Wall myfun.o test.o -o test

test.o: myfun.h
	gcc -Wall -c test.c

myfun.o: myfun.c
	gcc -Wall -c myfun.c

clean:
	rm *.o test
