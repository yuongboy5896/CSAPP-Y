/* Return i wehn any odd bit of x equals 1; 0 otherwis Assume w=32 */

/* $begin  any odd  */
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
/* $begin any odd */


/*  Return i wehn any odd bit of x equals 1; 0 otherwis Assume w=32
*/

int any_odd_one(unsigned x)
{
	unsigned tmp = 0x55555555 & x;
	return 0x55555555 & x && 1;
}
int  main(int argc, char *argv[])
{
	

	ux = 4;
	int anyone = any_odd_one(ux);

	printf("any_odd_one %d \n", anyone);

	getchar();
	return 1;
}
