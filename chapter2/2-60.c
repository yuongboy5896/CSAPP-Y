/* show-bytes - prints byte representation of data */

/* $begin show-bytes */
#include <stdio.h>
/* $end show-bytes */
#include <stdlib.h>
#include <string.h>
/* $begin show-bytes */



unsigned replace_byte(unsigned int x, int i, unsigned char b){
   printf("**************************%d******************************\n", i); 
/*
    printf(" 0xFFFFFF00 << i * 2 * 4 -->>> %x \n ", 0xFFFFFF00 << i * 2 * 4); 
	printf(" b << i * 2 * 4 -->>> %x \n ", b << i * 2 * 4);
	printf("0xFFFFFF00 << i * 2 * 4  | b << i * 2 * 4 -->>> %x \n ", 0xFFFFFF00 << i * 2 * 4 | b << i * 2 * 4);
	printf("(0x00FFFFFF >> (i - 1) * 2 * 4) --->>> %x \n ", (0x00FFFFFF >> 32-8*(i+1)));
	printf("0x0FFFFFFF -%x  -->>> %x \n ", (0x0FFFFFFF >> 32 - i * 2 * 4 - 1) - 0xF0000000 >> 32 - i * 2 * 4 - 1, 0x0f000000 >> 32 - i * 2 * 4 - 1);
*/
	return (x | 0xff << i * 2 * 4) &( (0xFFFFFF00 << i * 2 * 4 | b << i * 2 * 4) |(0x00FFFFFF >> 32 - 8 * (i + 1)));
}

int main(int argc, char *argv[]){
   unsigned int y = 0x12345678;
	unsigned d = 0;
	d = replace_byte(y, 0, 0xAB);
    printf(" replace_byte %x\n", d);
    d = replace_byte(y, 1, 0xAB);
	printf(" replace_byte %x\n", d);
	d = replace_byte(y,2,0xAB);
	printf(" replace_byte %x\n", d);
	d = replace_byte(y, 3, 0xAB);
	printf(" replace_byte %x\n", d);

	/*
	d = replace_byte_test(y, 32, 0xFF);
	printf(" replace_byte %x\n", d);
    */
}