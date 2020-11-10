/* show-bytes - prints byte representation of data */

/* $begin show-bytes */
#include <stdio.h>
/* $end show-bytes */
#include <stdlib.h>
#include <string.h>
/* $begin show-bytes */

typedef unsigned char *  byte_pointer;

void show_bytes(byte_pointer start, size_t len){
    size_t  i;
    for (i = 0; i < len; i++)
    {
        printf("%p\t0x%.2x\n",&start[i],start[i]);
    }
    printf("\n");
    
}

int is_little_endina()
{
    int little = 1;
    byte_pointer start =  (byte_pointer) &little;
    printf("%p\t0x%.2x\n",&start[0],start[0]);
    return start[0];
} 


int main(int argc,char *argv[])
{
    is_little_endina();
    return 0;
}