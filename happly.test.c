/* happly.test.c --- tests happly
 * 
 * 
 * Author: Robert F. Carangelo III
 * Created: Mon Oct 12 15:17:28 2020 (-0400)
 * Version: 
 * 
 * Description: puts three cars in a hashtable and calls happly
 * 
 */

#include <stdio.h>
#include "hash.h"
#include "listfun.h"
#include <inttypes.h>

int main(void){
	hashtable_t *htable;
	uint32_t tsize = 10;
	car_t *car1 = makecar("car1",30.2,8102);
	car_t *car2 = makecar("car2",30.2,8102);
	car_t *car3 = makecar("car3",30.2,8102);
	void (*fn) (void* pt); 
	


	htable = hopen(tsize);
	hput(htable, car1, car1->plate,strlen(car1->plate));
	hput(htable, car3, car3->plate,strlen(car3->plate));
	hput(htable, car2, car2->plate,strlen(car2->plate));
	fn = print_node;

	happly(htable,fn);
	hclose(htable);

	

	exit(EXIT_SUCCESS);
}
