#include <stdio.h>
/*
* Generate mask indicating leftmost 1 in x. Assume w=32.
* For example, 0xFF00 -> 0x8000, and 0x6600 --> 0x4000.
* If x = 0, then return 0.
*/
int leftmost_one(unsigned x);

int main(void){
	
	int xx = lower_one_mask(17);
	printf("x : %x \n", xx);
	getchar();
	return 0;
	
}





int lower_one_mask(int n)
{
	int x =  1 << n -1;
	x |= x >> 1;
	x |= x >> 2;
	x |= x >> 4;
	x |= x >> 8;
	x |= x >> 16;
	return x;
}