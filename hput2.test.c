/* hput1.test.c --- test for hput from hash.c module
 * 
 * 
 * Author: Tyler I. Neath
 * Created: Sun Oct 11 23:17:12 2020 (-0400)
 * Version: 
 * 
 * Description: tests hput functionality from Hash.c using a null value
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

    // putting in a NULL element
	car_t *p1 = NULL;
	value = hput(testp,p1,p1->plate,8);
	if(value==0){
		printf("Null test failed");
		exit(EXIT_FAILURE);
	}
    hclose(testp);
	exit(EXIT_SUCCESS);
	
	
}
