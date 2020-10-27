#include<stdio.h>

main()
{
    int a, b;
    printf( "\n nhap hai so a, b: ");
    scanf( "%d %d", &a, &b);

    if (a*b>1000)
    printf( "\n a nhan b lon hon 1000. ");
    else if (a*b==1000)
    printf( "\n a nhan b bang 1000. ");
    else 
    printf( "\n a nhan b nho hon 1000. ");

    return 0;
}