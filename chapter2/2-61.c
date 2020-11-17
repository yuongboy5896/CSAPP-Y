/* expression    All one  All zero   Big endian all one   */

/* $begin expression */
#include <stdio.h>

#include <stdlib.h>
#include <string.h>
/* $begin expression */
int main(int argc, char *argv[])
{
	int val = 12345;

	if (argc > 1) {
		val = strtol(argv[1], NULL, 0);
	}
	int  x;
	// one all
	x = !(0xffffffff ^0xffffffff) ;

	printf("~0xffffffff + 1£º %x \n", x);
	x = !(0x0fff0fff ^ 0xffffffff);
	printf("~0x0ffff0ff + 1£º %x \n", x);
	// zero all
	x = !(0x0 ^ 0x0);
	printf("~0x00000000 £º %x \n", x);
	x = !(0x0fff0fff ^ 0x0);
	printf("~0x0fff0fff + 1£º %x \n", x);

	//

	//x = 0x0000000ff << ((sizeof(int) - 1) << 3);
	int shift_val = (sizeof(int) - 1) << 3;
	printf("0x0000000ff << (sizeof(int) - 1) << 3: %x \n", 0x1000000ff << shift_val);
	x = 0x100bb10fF << shift_val;
	x = !(x ^ 0xff000000);


	printf("   little endian all one £º %x \n", x);

	printf("0x0000000ff << (sizeof(int) - 1) << 3: %x \n", 0x1000000ff << shift_val);
	x = 0x010bb10fF >> shift_val;
	x = !(x ^ 0x00000000);


	printf("   big endian all zore £º %x \n", x);

	system("pause");
	return 0;
}