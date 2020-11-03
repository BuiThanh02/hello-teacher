#include<stdio.h>

main()
{
    int num;
    labell:
    printf( "\n enter a number (1): ");
    scanf( "%d", &num);
    if(num==1)
    goto test;
    else 
    goto labell;
    test:
    printf( "all done...");
}