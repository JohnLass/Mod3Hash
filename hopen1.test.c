/* hopen1.test.c --- 
 * 
 * 
 * Author: John J. Lass
 * Created: Sun Oct 11 01:30:00 2020 (-0400)
 * Version: 
 * 
 * Description: 
 * 
 */
#include "hash.h"
#include <stdlib.h>
int main(void){
	uint32_t size = 3;
	hashtable_t *testp;
	testp=hopen(size);
	exit(EXIT_SUCCESS);
}
