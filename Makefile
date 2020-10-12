CFLAGS=-Wall -pedantic -std=c11 -g

all: hopen1.test hput1.test hput2.test hput3.test put1.test hsearch.test hclose.test happly.test remove1.test happly2.test remove2.test

%.o:  %.test.c hash.h listfun.h queue.h
			gcc $(CFLAGS) -c $<  

hopen1.test:	hopen1.test.o	hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o hopen1.test.o -o hopen1.test

hput1.test:		hput1.test.o hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o hput1.test.c -o hput1.test

hput2.test:		hput2.test.o hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o hput2.test.c -o hput2.test

hput3.test:		hput3.test.o hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o hput3.test.c -o hput3.test

put1.test:	put1.test.o	hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o put1.test.o -o put1.test

hsearch.test:	hsearch.test.o	hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o hsearch.test.o -o hsearch.test

hclose.test:	hclose.test.o	hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o hclose.test.o -o hclose.test

happly.test:	happly.test.o	hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o happly.test.o -o happly.test

remove1.test:	remove1.test.o hash.o queue.o listfun.o
								gcc $(CFLAGS) hash.o queue.o listfun.o remove1.test.o -o remove1.test

happly2.test: happly2.test.o hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o happly2.test.o -o happly2.test

remove2.test: remove2.test.o hash.o queue.o listfun.o
							gcc $(CFLAGS) hash.o queue.o listfun.o remove2.test.o -o remove2.test


clean:
				rm -f *.o hopen1.test hput1.test hput2.test hput3.test put1.test hclose.test hsearch.test remove1.test happly2.test remove2.test


