#include <stdio.h>
#include <limits.h>
/* Addition that staurates to TMin or Tmax*/

int staturating_add(int x, int y);


int main()
{
    // INT_MIN  INT_MAX    
	int n =  staturating_add(0x70000000, 0x70000000); // negative overflow >> 0x7fff ffff
	printf("result : %x\n",n);
	n = staturating_add(0x80000000, 0x80000001); // positive overflow  >> 0x8000 0000
	printf("result : %x\n", n);
	getchar();
	return 0;
}

int staturating_add(int x, int y)
{
 	int sum = x + y;
    int pos_over = !( x & INT_MIN ) && !( y & INT_MIN ) && ( sum & INT_MIN);
    int neg_over = ( x & INT_MIN ) &&  ( y & INT_MIN ) && !(sum & INT_MIN) ;
    ( pos_over && (sum = INT_MAX) )||(neg_over && sum =  INT_MIN);

	return sum;
}