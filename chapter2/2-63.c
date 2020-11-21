/* srl sra  */

/* $begin srl sra  */
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
/* $begin srl sra  */

unsigned srl(unsigned x, int k){

	int  shift_val = 8 * (sizeof(int)) - 1;
	int  tmp = 1 << shift_val >> k;
	int  tmp1 = (~0 - (1 << shift_val)) >>k;

	unsigned xsra = (int) x >> k;

	


	//printf("(int) x >> k %x \n", xsra);
	return	xsra & 1 << shift_val >> k | x & (~0 - (1 << shift_val)) >> k;

}

int sra(int x, int k){
	int xsrl = (unsigned)x >> k;
	int  shift_val = 8 * (sizeof(int)) - 1;
	int  tmp1 = (~0 - (1 << shift_val)) >> k;

	int tmp2 = x & tmp1;
	int  tmp = xsrl&(unsigned)1 << shift_val >> k;
	 
	printf("sra：%x \n", tmp | tmp2);

	return xsrl & 1 << shift_val >> k |x & ~0 - (1 << shift_val) >> k;
	
}


int  main(int argc, char *argv[])
{
	unsigned ux = 0x87654321;

	ux = srl(ux, 31);
	printf("strl return %x \n", ux);
	ux = 0x87654321;
	ux = sra(ux, 31);
	printf("sra return %x \n", ux);

	return 1;
}
