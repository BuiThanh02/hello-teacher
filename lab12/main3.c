#include <stdio.h>
#include <string.h>

void main()
{
	char firstname[15];
	char lastname[15];
	
	printf("\n enter your first name: ");
	scanf("%s", firstname);
	printf("\n enter your last name: ");
	scanf("%s", lastname);
	strcat(firstname, lastname);
	printf("%s", firstname);
}
