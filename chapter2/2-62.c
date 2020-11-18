#include <stdio.h>

#include <stdlib.h>
#include <string.h>
/* $begin expression */

int int_shifts_are_atrithmetic()
{
	int shift_val = (sizeof(int) << 3 )-1;
	int x = 1 << shift_val >> shift_val;
	return !~(1 << shift_val >> shift_val )^ 0x0;

}



int  main(int argc, char *argv[])
{
	int x = int_shifts_are_atrithmetic();
	printf("x %d", x);
	system("pause");
	return 1;
}