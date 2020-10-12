/* remove2.test.c --- 
 * 
 * 
 * Author: John J. Lass
 * Created: Mon Oct 12 18:25:06 2020 (-0400)
 * Version: 
 * 
 * Description: 
 * 
 */
#include "hash.h"
#include "listfun.h"


int main(void){
	uint32_t size = 10;
	hashtable_t *testp, *resp;
	bool (*fn)(void *cp, const void* keyp);

	
	testp=hopen(size);
	fn = search_plate;
	resp = hremove(testp,fn,"keystone1",9);

	if(resp!=NULL)
		exit(EXIT_FAILURE);

	hclose(testp);
	exit(EXIT_SUCCESS);
}
