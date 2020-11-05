#include <stdio.h>
#include <math.h>

getarea(int x)
{
	int a, b, c;
	printf("\n nhap 3 so canh cua tam giac: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int s, p; float sqrt(s);
	p=a+b+c;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf( "\n dien tich cua tam giac tinh theo cong thuc heron la: %d", s);
	return(s);
}
main()
{
	int x;
	getarea(x);
}


