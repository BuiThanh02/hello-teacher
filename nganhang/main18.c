#include <stdio.h>

int sodu=20000000, sodu2=10000000;

// dang nhap
login(int username, int password)
{
	int count=1;
	int y;
	do
	{
		printf("\n enter your username: ");
	    scanf("%d", &username);
		if(username==2810)
		printf("\n your username is corect. ");
		else if(username!=2810)
		{
			printf("\n your username is incorect. ");
			printf("\n you have %d turn left. ", 3-count);
			count++;
			
			if(count>3)
			{
				printf("\n your account is locked. ");
				return 0;
			}
		}
	
	}
	while(username!=2810);
	
			do
		{
			printf("\n enter your password: ");
			scanf("%d", &password);
			if(password==2002)
			printf("\n your password is corect. ");
			else if(password!=2002)
			{
				printf("\n your password is incorect. ");
				printf("\n you have %d turn left. ", count);
				count++;
				
				if(count>3)
				{
					printf("\n your account is locked. ");
					return 0;
				}
			}
		}
		while(password!=2002);
	
	return 1;
}

// rut tien
withdraw(int num)
{
	do
	{
		printf("\n enter the amout you want to withdraw: ");
		scanf("%d", &num);
		if(num%50000==0 && num<3000000 && num<=sodu)
		{
			printf("\n money left in your account is: %d", sodu-num);
			sodu=sodu-num;
		}
		else
		printf("\n your input is invalid. ");
	}
	while(num%50000!=0 || num>3000000 || num>sodu);
}

// chuyen tien
transfer(int id, int num)
{
	printf("\n enter account you want to tranfer: ");
	scanf("%d", &id);
	printf("\n enter the amount you want to tranfer: ");
	scanf("%d", &num);
	if(num%50000==0)
	{
		printf("\n you have succesfuly traded. ");
		printf("\n money left in your account is: %d", sodu-num);
		printf("\n money left in received account is: %d", sodu2+num);
		sodu=sodu-num;
		sodu2=sodu2+num;
	}
	else
	printf("\n your input is invalid. ");
}

// kiem tra tai khoan
check()
{
	printf("\n money left in your account is: %d", sodu);
}

// bat dau chuong trinh
main()
{
	int username, password;
	int x, y, num, id, number;
	char ans;
	
	if(login(username,password)==1)
	{
			do
		{
			printf("\n MENU ");
			printf("\n ============== ");
			printf("\n 1. withdraw.");
			printf("\n 2. tranfer. ");
			printf("\n 3. check. ");
			printf("\n 4. deposit money. ");
			printf("\n 5. exit. ");
			printf("\n choose: ");
			scanf("%d", &x);
			
			switch(x)
			{
				case 1:
					withdraw(number);
					break;
				case 2:
					transfer(id,num);
					break;
				case 3:
					check();
					break;
				case 4:
					printf("\n ok");
					break;
				case 5:
					printf("\n program ended. ");
					break;
			}
			
			sodu=sodu-num;
			sodu2=sodu2+num;
			printf("\n do you want to do other act ??? y/n ");
			scanf("%c", &ans);
			scanf("%c", &ans);
		}
		while(ans=='y');
	}
	printf("\n program ended. ");
}
