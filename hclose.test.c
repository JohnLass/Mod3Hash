/* hclose.test.c --- tries closing a ht that was never opened
 * 
 * 
 * Author: Robert F. Carangelo III
 * Created: Mon Oct 12 14:54:24 2020 (-0400)
 * Version: 
 * 
 * Description: tries closing a hashtable_t that was never opened
 * 
 */
#include "listfun.h"
#include "list.h"
#include "hash.h"
#include <stdio.h>

int main(void){
	hashtable_t *table = NULL;

	hclose(table);
	

	exit(EXIT_SUCCESS);
}
