#include<stdio.h>

int i ;
void main()
{
    extern int i;
    printf( "\n i=%d", i );
}
