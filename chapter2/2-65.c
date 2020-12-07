/* Return i wehn any odd bit of x equals 1; 0 otherwis Assume w=32 */

/* $begin  any odd  */
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
/* $begin any odd */


/* Return 1 when x contains an odd number of 1s; 0 otherwise.
Assume w=32 */

int odd_ones(unsigned x)
{
	 x ^= x >> 1;
	 x ^= x >> 2;
	 x ^= x >> 4;
	 x ^= x >> 8;
	 x ^= x >> 16;
	
	return  1 & x ;
}
int  main(int argc, char *argv[])
{
	

	ux = 4;
	int anyone = odd_ones(ux);

	printf("odd_ones %d \n", anyone);

	getchar();
	return 1;
}
