/* remove1.test.c --- 
 * 
 * 
 * Author: John J. Lass
 * Created: Mon Oct 12 16:07:03 2020 (-0400)
 * Version: 
 * 
 * Description: 
 * 
 */
#include "hash.h"
#include "listfun.h"


int main(void){
	uint32_t size = 3;
	hashtable_t *testp,*resp;
	bool (*fn)(void *cp, const void* keyp);
	car_t *p1 = makecar("keystone",40.4,595);
	car_t *p2 = makecar("keystone1",40.5,599);
	car_t *p3 = makecar("keystone2",40.6,620);

	testp=hopen(size);
	hput(testp,p1,p1->plate,8);
	hput(testp,p2,p2->plate,9);
	hput(testp,p3,p3->plate,9);

	fn = search_plate;
	resp = hremove(testp,fn,"keystone1",9);
	if(!(checkcar(resp,"keystone1",40.5,599)))
		exit(EXIT_FAILURE);

	resp = hsearch(testp,fn,"keystone1",9);

	if(resp!=NULL)
		exit(EXIT_FAILURE);

	hclose(testp);
	free(p2);
	exit(EXIT_SUCCESS);
}	
	
