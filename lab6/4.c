#include<stdio.h>

main()
{
    int i, j, k;
    i=0;
    printf( "enter no. of row: ");
    scanf("5d", &i);
    printf("\n");
    for (j=0;j<i;j++)
    {
        pritnf("\n");
        for(k=0;k<=j;k++)
        printf("*");
    }
}