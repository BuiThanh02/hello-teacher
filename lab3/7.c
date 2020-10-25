#include<stdio.h>

void main()
{
    printf( "the number 555 in various form: \n");
    printf( "without modifier: \n");
    printf( "[%d]\n", 555);
    printf( "with - modifier:\n");
    printf( "[%-d]\n", 555);
    printf( "with digit string 10 as modifier: \n");
    printf( "[%10d]\n", 555);
    printf( "with 0 as modifier:\n");
    printf( "[%010d]\n", 555);
    printf( "with 0 and string 10 as modifiers:\n");
    printf( "[%010d]\n", 555);
    printf( "with -, 0 as modifiers:\n");
    printf( "[%-010d]\n", 555);
}