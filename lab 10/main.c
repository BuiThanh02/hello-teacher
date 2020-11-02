#include <stdio.h>

main()
{
	incre();
	incre();
	incre();
}

incre()
{
	char var=65;
	printf("\n the character stored in var is %c", var++);
}
