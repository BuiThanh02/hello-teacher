#include<stdio.h>

printarray(int arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t", arr[i]);
	}
}

reverse(int arr[], int size)
{
	int i;
	for(i=size-1;i>=0;i--)
	{
		printf("%d\t", arr[i]);
	}
}

main()
{
	int arr[5], i;
	for(i=0;i<5;i++)
	{
		printf("nhap so arr[%d]: ", i);
	    scanf("%s", &arr[i]);
	    printf("\n so da nhap la: %d \n", arr[i]);
	}
	printf("\n cac so da nhap theo thu tu la: ");
	printarray(arr,5);
	printf("\n cac so theo thu tu nguoc lai la: ");
	reverse(arr, 5);
	return 0;
}
