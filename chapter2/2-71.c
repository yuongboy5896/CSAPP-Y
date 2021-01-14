/* Declaration of data type  where 4 bytes are packed
*  into  unsigned */
typedef unsigned packed_t ;

/* Extract byte form work ,Return as signed integer */
int xbyte(packed_t word, int bytenum);


int main()
{
    int  n;
    n = 2;
    packed_t w = 0x00112233;
    printf("w %x n%d w%x ", w, n, xbyte(w,n) );
    
    w = 0xffff;
    n = 1;
    printf("w %x n%d w%x ", w, n, xbyte(w,n) );
    return 1;
}


int xbyte(packed_t word, int bytenum)
{
    word = word << (4 - bytenum -1) <<3;
    return (int)word >> (3<<3);
}