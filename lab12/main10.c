#include<stdio.h>

void main()
{
	char lines[5][20];
	int ctr, long ctr=0;
	int longest(charlies_arr[][20]);
	
	for(ctr=0; ctr<5; ctr++)
	{
		printf("\n enter string %d: ", ctr+1);
		scanf("%s", lines[ctr]);
	}
	
	longctr=longest(lines);
	printf("\n the longest string is %s", lines[longctr]);
	getch();
}

int longest(char lines_arr[][20])
{
	int i=0, 1_ctr=0, prev_len, new_len;
	prev_len=strlen(lines_arr[i]);
	for(i++;i<5;i++)
	{
		new_len=strlen(lines_arr[i]);
		if(new_len>prev_len)
		1_ctr=i;
		prev_len=new_len;
	}
	return 1_ctr;
}
