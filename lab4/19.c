#include<stdio.h>

void main()
{
    char c;
    printf( "please enter a character: ");
    scanf( "%c",  &c);

    if (c>='A' && c<='Z');
    printf( "lowercase character = %c", c+'a'-'A');
    else 
    printf( "character entered is = %c", c);
}