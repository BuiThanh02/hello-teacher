#include <stdio.h>
#include <string.h>

void main()
{
	int i;
	char names[5][20];
	voi uppername(char name_arr[]);
	
	for(i=0;i<5;i++)
	{
		printf("\n enter string %d: ", i+1);
		scanf("%s", names[i]);
	}
	
	for(i=0;i<5;i++)
	{
		uppername(names[i]);
		printf("\n new string %d: %s", i+1, names[i]);
	}
	
	getch();
}

void uppername(char name_arr[i])
{
	int x;
	
	for(x=0; name_arr[x] != '\0'; x++)
	{
		if(name_arr[x] >=97 && name_arr[x] <= 122)
		name_arr[x] = name_arr[x] -32;
	}
}
