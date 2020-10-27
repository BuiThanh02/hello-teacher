#include<stdio.h>

main()
{
    int a, b;
    printf( "\n nhap vao hai so a, b: ");
    scanf( "%d %d", &a, &b);

    if(a-b==a)
    printf( "\n hieu hai so bang so a: ");
    else if (a-b==b)
    printf( "\n hieu hai so bang b: ");
    else 
    printf( "\n hieu hai so khong bang so nao: ");

    return 0;
}