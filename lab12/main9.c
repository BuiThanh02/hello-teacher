#include <stdio.h>
#include <string.h>

void main()
{
	char compname[20]="micrasoft";
	int len, ctr;
	
	len= strlen(compname);
	for (ctr=0;ctr<len;cctr++)
	printf("%c * ", compname[ctr]);
	getch();
}
