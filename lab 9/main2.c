#include <stdio.h>

main()
{
	int intarr[5];
	int i;
	float floatarr[10];
	
	for(i=0; i<5; i++)
	{
		printf("\n enter 5 numbers: ");
		scanf( "%d", &intarr[i]);
		floatarr[i]=intarr[i];
	}
	
	for(i=5;i<10;i++)
	{
		floatarr[i]=0;
		printf("\n %f", floatarr[i]);
	}
}
