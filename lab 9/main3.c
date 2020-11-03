#include<stdio.h>

main()
{
	int arr[10];
	int avr, sum, i, max, min, count, c;
	sum=0;
	count=0;
	c=0;
	
	for (i=0; i<10; i++)
	{
		printf( "\n enter ten numbers: ");
		scanf( "%d", &arr[i]);
		sum+=arr[i];
	}
	printf("\n sum is: %d", sum);
	
	max = arr[0];
	for( i=0; i<10; i++)
	{
		if (arr[i]>max)
		max = arr[i]; 
	}
	printf( "\n the highest number is: %d", max);
   for (i=0; i<10;i++)
   {
   	if (arr[i]==max)
   	count+=1;
   }
	printf("\n so lan xuat hien la: %d", count);
	
	min = arr[0];
	for(i=0;i<10; i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	printf( "\n the lowest number is: %d", min);
	for (i=0;i<10;i++)
	{
		if (arr[i]==min)
	    c=c+1;
	}
	printf("\n so lan xuat hien la: %d", c);
	
	avr=sum/10;
	printf("\n the average is: %d", avr);
}
