#include<stdio.h>

main ()
{
    int x;
    char i, ans;
    i='';
    do{
        x=0;
        ans='y';
        printf("\n enter sequence of character: ");
        do{
            i=getchar();
            x++;
        }while (i != '\n');
        i='';
        printf( "\n number of characters entered is: %d", --x);
        printf( "\n more sequences (Y/N)?");
        ans=getch();
    }while (ans=='y' || ans=='y');
}