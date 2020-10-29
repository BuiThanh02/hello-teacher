#include<stdio.h>

main()
{
    int i, j, k, l;
    l=4;
    i=5;
    
    for( j=0; j<=l; j++)
    {
        printf("\n");
        for( k=0; k<=j;k++)
        printf( "%d", k+1);
    }

    for( j=i; j>=1; j--)
    {
        printf("\n");
        for( k=1; k<=j;k++)
        printf("%d",k);
    }
    return 0;
}