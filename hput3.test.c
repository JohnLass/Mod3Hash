/* hput3.test.c --- Tests putting to a null hashtable
 * 
 * 
 * Author: Robert F. Carangelo III
 * Created: Mon Oct 12 14:07:06 2020 (-0400)
 * Version: 
 * 
 * Description: makes a null hashtable pointer, tries putting to it without openning it
 * 
 */

#include <stdio.h>
#include "hash.h"
#include "listfun.h"
#include "list.h"
#include <inttypes.h>

int main(void){
	hashtable_t *htable = NULL;
	car_t *car1 = makecar("car1",349.3, 2004);
	uint32_t rtn;

	rtn = hput(htable,car1,car1->plate,4);

	if(rtn == 0){
		printf("Fail\n");
		exit(EXIT_SUCCESS);
	}

	free(car1);
	exit(EXIT_SUCCESS);


}
