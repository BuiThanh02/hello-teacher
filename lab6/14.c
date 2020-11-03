#include <stdio.h>
#include <conio.h>

void main()
{
	int cnt =0, num;
	
	do
	{
		printf( "\n enter a number: ");
		scanf("%d", &num);
		cnt++;
	}while (num!=0);
	printf( "\n the total numbers entered were %d", --cnt);
}
