CFLAGS=-Wall -pedantic -std=c11 -g

all: hopen1.test

%.o:  %.test.c hash.h
			gcc $(CFLAGS) -c $<  

hopen1.test:	hopen1.test.o	hash.o
							gcc $(CFLAGS) hash.o hopen1.test.o -o hopen11.test


clean:
				rm -f *.o hopen1.test


