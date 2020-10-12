CFLAGS=-Wall -pedantic -std=c11 -g

all: hopen1.test hput1.test hput2.test

%.o:  %.test.c hash.h listfun.h queue.h
			gcc $(CFLAGS) -c $<  

hopen1.test:	hopen1.test.o	hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o hopen1.test.o -o hopen1.test

<<<<<<< HEAD
hput1.test:		hput1.test.o hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o hput1.test.c -o hput1.test

hput2.test:		hput2.test.o hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o hput2.test.c -o hput2.test
=======
put1.test:	put1.test.o	hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o put1.test.o -o put1.test

>>>>>>> 346894e994d93c37f065fe446f3bd6b4dadbce65

clean:
				rm -f *.o hopen1.test hput1.test hput2.test


