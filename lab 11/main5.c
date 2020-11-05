#include <stdio.h>

int sum(int a, int b)
{
	printf("\n tong hai so la: %d", a+b);
}

int sub(int a, int b)
{
	printf("\n hieu hai so la: %d", a-b);
}

int multi(int a, int b)
{
	printf("\n tich hai so la: %d", a*b);
}

double div(int a, int b)
{
	if(b=0)
	{
		printf("\n so ban nhap khong hop le.");
	}
	else
	printf("\n thuong hai so la: %d", a/b);
}

nhap(int a, int b)
{
	printf("\n nhap so a: ");
	scanf("%d", &a);
	printf("\n nhap so b: ");
	scanf("%d", &b);
}

void menu()
{
	int a, b;
	printf("TINH TOAN\n");
	printf("==========\n");
	printf("1. nhap so: \n");
	nhap(a,b);
	printf("2. tinh tong. \n");
	printf("3. tinh hieu. \n");
	printf("4. tinh tich. \n");
	printf("5. tinh thuong. \n");
	printf("6. thoat. \n");
	printf("==========\n");
	printf("chon: \n");
}

main()
{
	int a, b, x;
	char t;
	do
	{
	
		menu();
		scanf("%d", &x);
		
		if(x==2)
		sum(a,b);
		if(x==3)
		sub(a,b);
		if(x==4)
		multi(a,b);
		if(x==5)
		div(a,b);
		if(x==6)
		{
		printf("\n chuong trinh ket thuc. cam on ban da su dung. \n");
		break;
		}
		printf("\n ban co muon thuc hien phep tinh khac??? y/n \n");
		scanf("%c", &t);
		scanf("%c", &t);
	}while(a=='y');
	printf("\n chuong trinh ket thuc. cam on ban da su dung. \n");
}
