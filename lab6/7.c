#include<stdio.h>

main()
{
    int num1, num2;
    num2=0;
    do{
        printf( "\n enter a number: ");
        scanf( "%d", &num1);
        printf( "\n no. is %d", num1);
        num2++;
    } while (num1!=0);
    printf( "\n the total numbers entered were %d", --num2);
}