CFLAGS=-Wall -pedantic -std=c11 -g

all: hopen1.test

%.o:  %.test.c hash.h listfun.h queue.h
			gcc $(CFLAGS) -c $<  

hopen1.test:	hopen1.test.o	hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o hopen1.test.o -o hopen1.test

put1.test:	put1.test.o	hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o put1.test.o -o put1.test


clean:
				rm -f *.o hopen1.test


