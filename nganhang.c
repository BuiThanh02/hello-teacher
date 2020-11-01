#include<stdio.h>

main()
{
    int n, p, count, x, sodu, num1, n2;
    char a;
    n=2810;
    p=2002;
    count=1;
    sodu=200000000;
    num1=0;

    printf( "\n welcome to HT bank. "); 
        do 
        {
          printf( "\n please enter your number card: ");
          scanf( "%d", &n);
          if(n!=2810)
          {
            printf( "\n your number card is wrong.");
            printf( "\n you have %d turn left. ", 3-count);
            count++;
            if (count>3)
            {
            printf( "\n your account is locked. ");
            break;
            }
          }
        else 
        printf( "\n your number card is right. ");
        }while (n!=2810);

        if (n==2810)
        {
        do 
        {
          printf( "\n enter your pin code: ");
          scanf( "%d", &p);
          if(p!=2002)
          {
            printf( "\n your pin code is wrong. ");
            printf( "\n you have %d turn left. ", 3-count);
            count++;
            if (count>3)
            {
            printf( "\n your account is locked. ");
            break;
            }
          }
        else 
        printf( "\n your account is valid. ");
        }while(p!=2002);
        }
    
    do
    {
    	printf( "\n 1. rut tien. ");
    	printf( "\n 2. hien thi so du tai khoan. ");
    	printf( "\n 3. chuyen khoan. ");
      	printf( "\n 4. ket thuc. ");
     	printf( "\n choose (1-4):");
      	scanf( "%d", &x);
   		
     	 if(x==1)
      	{
       	 printf( "\n nhap so tien can rut: ");
       	 scanf( "%d", &num1);
        	if ( num1<sodu && num1<5000000 && num1%50000==0)
        	{
        		printf(" \n giao dich thanh cong. ");
	        	printf( "\n so tien con lai trong tai khoan la: %d", sodu-num1);
			}
			else 
			printf( "\n so tien rut khong hop le. ");
	    }
        
        if(x==2)
        {
        	printf( "\n so tien con lai trong tai khoan la: %d", sodu);
		}
		
		if(x==3)
		{
			printf( "\n nhap tai khoan ban muon chuyen tien: ");
			scanf( "%d", &n2);
			printf( "\n nhap so tien ban muon chuyen: ");
			scanf( "%d", &num1);
			
			if(num1<sodu)
			{
				printf( "\n chuyen khoan cho tai khoan %d thanh cong. ", n2);
				printf( "\n so du trong tai khoan la: %d ", sodu-num1);
			}
			else
			printf( "\n so tien ban muon chuyen nhieu hon so du tai khoan. ");
		}
		
		if(x==4)
		{
			printf( "\n ket thuc. ");
			break;
		}
		
		sodu=sodu-num1;
		printf( "\n ban co muon tiep tuc giao dich khac khong ??? y/n ");
		
		scanf( "%c", &a);
        scanf( "%c", &a);
    }while(a=='y');
    printf( "\n cam on ban da su dung dich vu cua chung toi, chuc ban mo ngay tot lanh. ");
    
    return 0;
}

