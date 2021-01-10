#include <stdio.h>


/*
* Do rotatin left shift . Assume  0<= n <w
* Example when x= 0x12345678 and w=32
* n=4 -> 0x23456781 ,n=20 -> 0x67812345
*/

unsigned rotate_left(unsigned x, int n);


int main(int argc, char *argv[]){


	unsigned x = rotate_left(0x12345678, 0);
	int  shift_val =  (sizeof(int)) << 3 - 1;
	x = rotate_left(0x12345678, 4);
	printf("x :%x -->0x 0x23456781 \n", x);

	x = rotate_left(0x12345678, 20);
	printf("x :%x -->0x 0x67812345 \n", x);

	getchar();
	return 0;
}


unsigned rotate_left(unsigned x, int n){


	int  shift_val = (sizeof(int)) << 3 ;
	return x << n | x >> shift_val - n;
}