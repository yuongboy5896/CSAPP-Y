#include <stdio.h>


/*
* Genrate mask indicating leftmost 1 in x ,Assume w=32
* For example ,0xFF00 -> 0x8000 ,and 0x6600 -->0x4000
* IF x= 0 ,then return =0 



*/



int leftmost_one(unsigned x);


int main(void)
{
	unsigned ux = 0xff00;
	int xx = leftmost_one(ux);
	printf("x: %x \n", xx);


	ux = 0x6600;
	xx = leftmost_one(ux);
	printf("x: %x \n", xx);



	ux = 0x6600;
	xx = leftmost_one(ux);
	printf("x: %x \n", xx);



	ux = 0xF0000000;
	xx = leftmost_one(ux);
	printf("x: %x \n", xx);


	ux = 0x70000000;
	xx = leftmost_one(ux);
	printf("x: %x \n", xx);

	ux = 0x00000002;
	xx = leftmost_one(ux);
	printf("x: %x \n", xx);
	getchar();

	ux = 0x00000000;
	xx = leftmost_one(ux);
	printf("x: %x \n", xx);
	getchar();

	
}

int leftmost_one(unsigned x){

	 x |= x >> 1;
	 x |= x >> 2;
	 x |= x >> 4;
	 x |= x >> 8;
	 x |= x >> 16;
	 int xxx = x == -1;
	 return (x >>  1) + (x &&1);
}