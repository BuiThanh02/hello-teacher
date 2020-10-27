#include<stdio.h>

main()
{
    int a, b;
    printf( "\n nhap hai so a, b: ");
    scanf( "%d %d", &a, &b);
    if (a%b==0)
    printf( "\n a chia het cho b. ");
    else 
    printf( "\n a khong chia het cho b. ");
    return 0;
}