#include <stdio.h>

void indexMin(int arr[], int size)
{
	int i;
    printf("Array elements are:\n");
    for (i=0; i<size; i++) 
	{
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    int min=arr[0];
    int vitri=0;
    for (i=0; i<size; i++) 
	{
        if (min>arr[i])
		{
            min=arr[i];
            vitri = i;
        }
    }
    printf("gia tri nho nhat = %d\n", min);
    printf("vi tri nho nhat la arr[%d]\n", vitri);
}
int main()
{
    int arr[10];
    indexMin(arr, 10);
    return 0;
}
