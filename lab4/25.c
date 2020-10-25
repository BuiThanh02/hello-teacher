#include<stdio.h>

void main()
{
    float com=0, sales_amt;

    printf( "enter the sales amout: ");
    scanf( "%f", &sales_amt);
    if ( sales_amt >=10000)
    com = sales_amt * 0.1;
    printf( "\n commission=%f", com);
}