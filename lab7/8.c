#include<stdio.h>

main()
{
    char ary[5];
    int i;
    printf( "\n enter string: ");
    scanf("%s", ary);
    printf( "\n the string is %s \n\n", ary);

    for (i=0; i<5; i++)
    printf("\t%d", ary[i]);
}