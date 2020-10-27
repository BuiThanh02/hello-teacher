#include<stdio.h>

main()
{
    int a, b ,c;

    printf( "\n enter three random numbers: ");
    scanf( "%d %d %d", &a, &b, &c);

    if ( a>b && a>c)
    printf( "\n the biggest number is: %d", a);
    else if ( b>a && b>c)
    printf( "\n the biggest number is: %d", b);
    else 
    printf( "\n the biggest number is: %d", c);

    return 0;
}