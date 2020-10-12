/* happly2.test.c --- testing happly on a null Hashtable
 * 
 * 
 * Author: Tyler I. Neath
 * Created: Mon Oct 12 16:38:19 2020 (-0400)
 * Version: 
 * 
 * Description: calls haplly on a null Hashtable
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
#include "listfun.h"
#include "queue.h"
#include "hash.h"

int main(void){
	hashtable_t *testp;
	uint32_t size = 3;

	testp = hopen(size);
	void (*fn) (void* pt);

	fn = print_node;
	happly(testp,fn);

	hclose(testp);

	exit(EXIT_SUCCESS);
	
}
