#include<stdio.h>

void main ()
{
    int a;
    float d;
    char ch, name[40];
    printf( "please enter the data\n");
    scanf( "%d %f %c %s", &a, &d, &ch, name);
    printf( "\nthe values accepteed are: %d, %f, %c, %s", a, d, ch, name);
}