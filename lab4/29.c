#include<stdio.h>

void main()
{
    int num1, num2, res;
    char op;
    num1=90;
    num2=33;
    op="-";
    switch (op)
    {
        case '+':
        res =num1+num2;
        printf( "\n the sum is: %d", res);
        break;
        case '-':
        res =num1-num2;
        printf( "\n number after subtraction: %d", res);
        break;
        case '/':
        res =num1/num2;
        printf( "\n number after division: %d", res);
        break;
        case '*':
        res =num1*num2;
        printf( "\n the number after multiplication: %d", res);
        break;
        default:
        printf( "\n invalid");
        break;
    }
}