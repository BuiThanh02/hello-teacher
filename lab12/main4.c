#include<stdio.h>
#include<string.h>

void main()
{
	char name1[15]="geena";
	char name2[15]="dorothy";
	char name3[15]="shania";
	char name4[15]="geena";
	int i;
	
	i= strcmp(name1,name2);
	printf("%s compared with %s returned %d\n", name1, name2, i);
	i=strcmp(name1,name3);
	printf("%s compared with %s returned %d\n", name1, name3, i);
	i=strcmp(name1,name4);
	printf("%s compared with %s returned %d\n", name1, name4, i);
}
