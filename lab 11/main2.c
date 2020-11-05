#include <stdio.h>

int check (int num)
{
	
	if(num%50==0)
	{
		printf("\n so %d la boi so cua 50", num);
		return 0;
	}
	else
	return 1;
}
main()
{
	int num, a, b;
	printf("\n nhap khoang so nguyen a den b: ");
	scanf("%d", &a);
	scanf("%d", &b);
	for(num=a;num<=b;num++)
	{
		check(num);
	}
}
