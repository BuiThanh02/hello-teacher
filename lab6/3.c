#include<stdio.h>

main()
{
    int i, j, max;
    printf( "please enter the maximum value \n");
    printf( "for which a table can be printed: ");
    scanf( "%d", &max);
    for (i=0, j=max; i<=max; i++, i--)
    printf("\n%d+%d=%d", i, j, i+j);
}