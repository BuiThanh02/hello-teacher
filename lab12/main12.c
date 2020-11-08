#include<stdio.h>

int check(char tct[], char tcg[])
{
	printf("\n nhap tieu chuan cua ban: ");
	gets(tct);
	printf("\n nhap tieu chuan cua crush: ");
	gets(tcg);
	printf("\n da nhan thong tin. ");
	printf("\n tieu chuan cua ban la: ");
	puts(tct);
	printf("\n tieu chuan cua crush la: ");
	puts(tcg);
}

int say(char ans)
{
	printf("\n to rat thich cau. lam ny t nhe??? y/n");
	scanf("%c", &ans);
	return ans;
}

Break()
{
	printf("\n that tinh buon qua :((((((( ");
}

love()
{
	printf("\n yeu het minh ");
}

void main()
{
	char tct[1000];
	char tcg[1000];
	char ans;
	
	check(tct, tcg);
	say(ans);
	if (ans = 'y')
	love();
	else if (ans != 'y')
	Break();
}
