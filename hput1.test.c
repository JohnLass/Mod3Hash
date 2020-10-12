/* hput1.test.c --- test for hput from hash.c module
 * 
 * 
 * Author: Tyler I. Neath
 * Created: Sun Oct 11 23:17:12 2020 (-0400)
 * Version: 
 * 
 * Description: tests hput functionality from Hash.c
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
#include "list.h"
#include "listfun.h"
#include "hash.h"


int main(void){
	uint32_t size = 3;
	int value;
	hashtable_t *testp;
	
	testp=hopen(size);
	car_t *p1 = makecar("keystone",40.4,595);
	value = hput(testp,p1,p1->plate,8);

	if(value!=0){
		printf("Hash value not entered");
		exit(EXIT_FAILURE);
	}

	hclose(testp);

	exit(EXIT_SUCCESS);
	
	
}
