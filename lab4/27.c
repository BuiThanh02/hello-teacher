#include<stdio.h>

void main()
{
    int num1, num2;
    num1=77;
    num2=99;
    if (num1==num2)
    printf( "\n the numbers are equal");
    else if (num1<num2)
    printf( "\n the larger number is: $d", num2);
    else 
    printf( "\n the larger number is: %d", num1);
}