/* put1.test.c --- 
 * 
 * 
 * Author: Robert F. Carangelo III
 * Created: Sun Oct 11 23:26:28 2020 (-0400)
 * Version: 
 * 
 * Description: 
 * 
 */
#include "hash.h"
#include "list.h"
#include "listfun.h"
#include "queue.h"
#include <stdlib>
#include <stdio>
#include <string.h>
#include <inttypes.h>

int main(void){
	hashtable_t *table; 
	car_t *car1 = makcar("car1", 302.3, 2013);
	int key_length;
	int tester;
	uint32_t size = 20;

	key_length = strlen(car1->plate);
	table = hopen(size);

	tester = hput(table, car1, car1->plate, keylength); 

	if(tester != 0 ){
		printf("Fail1\n");
		exit(EXIT_FAILURE);
	}

	hclose(table);


	exit(EXIT_SUCCESS);
}
