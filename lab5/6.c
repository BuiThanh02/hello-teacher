#include<stdio.h>

main()
{
    int x, y;
    x=y=0;

    printf( "\n enter number x: ");
    scanf( "%d", &x);
    if (x<2000 || x>3000)
    printf( "\n x = %d", x);
    else 
    printf( "\n invalid ");

    printf( "\n enter number y:");
    scanf( "%d", &y);
    if (y>100 || y<500)
    printf( "\n y = %d", y);
    else 
    printf( "\n invalid ");
}