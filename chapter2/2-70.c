/*
* Return 1 when x can be represented as an nbit ,2's-complement
* number ; 0 otherwise
* Assume 1 <= n <=w
*/

int fits_bits(int x , int n);


int  main()
{
    int x ,n;
    x = 0xffff;
    n = 16;
    int nbits = fits_bits(x, n);
    printf("x %d , n%d ,w %d",x , n, w);
}

int fits_bits(int x, int n)
{
    int w = sizeof(int) << 3;
	w = x << (w - n - 1) >> (w - n - 1);
	return w == x;
}
