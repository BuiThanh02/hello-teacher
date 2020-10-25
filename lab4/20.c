#include<stdio.h>

main()
{
    int x;
    x=0;

    printf( "enter choice (1-3): ");
    scanf( "%d", &x);

    if (x == 1)
    printf( "\n choice is 1");
    else if ( x==2)
    printf( "\n choice is 2");
    else if (x==3)
    printf( "\n choice is 3");
    else
    printf ( "\ninvalid choice: invalid choice");
    }
    
}