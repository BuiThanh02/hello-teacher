#include<stdio.h>

main ()
{
    int num1, num2, i, sum = 0;
    printf( "\n nhap khoang: ");
    scanf( "%d", &num1);
    scanf( "%d", &num2);

    for(i=num1 ; i<=num2; i++)
    {
        if (i%2==1)
        {
         printf( "\n cac so le la: %d \n", i);
         sum = sum + i;
        }
    }
    printf( "\n tong cac so le la: %d", sum);
    return 0;
}