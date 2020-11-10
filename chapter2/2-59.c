/*  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc,char *argv[])
{
    int x = 0x89ABCDEF;
    int y = 0x76543210;
    int z = 0x76543210 & 0xFFFFFF00 | 0x000000FF & 0x89ABCDEF;
    printf("%x \n",z);


}

