#include <stdio.h>

main()
{
	int arr[10];
	int i;
	
	for (i=0;i<10;i++)
	{
		printf( "\n enter 10 numbers: ");
		scanf( "%d", &arr[i]);
	}
	
	for (i=2;i<10;i+=2)
	{
		printf( "\n so chan trong day la: %d", arr[i]);
	}
}
