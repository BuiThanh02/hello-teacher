#include<stdio.h>

void main()
{
int num, res;

printf( "enter a number: ");
scanf("%d", &num);

res = num % 2;

if (res==0)
printf( "the number is even")
else 
printf( "the number is odd");
}