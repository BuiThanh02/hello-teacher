#include<stdio.h>

main()
{
    int num1, num2, sum, i, n;
    num1=0;
    num2=1;
    printf( "\n dien gioi han cua day: ");
    scanf( "%d", &n);
    printf( "\t%d", num1);
    printf( "\t%d", num2);

    for ( i=0; i<=n; i++)
    {
        sum=num1+num2;
        printf( "\t%d", sum);
        num1=num2;
        num2=sum;
    }
}