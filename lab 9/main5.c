#include <stdio.h>

main()
{
	int class[i][j];
	int sum[j];
	int i, j;
	
	for (j=0; j<30; j++)
	{
		for (i=0; i<4; i++)
		{
			printf( "\n nhap diem [%d][%d]: ", i, j);
			scanf("%d", &class[i][j]);
		}
	}
	
	for (j=0; j<30; j++)
	{
		for (i=0; i<4; i++)
		{
			printf( "\n so diem cua [%d][%d] la: %d", i, j, class[i][j]);
			sum[j]+=class[i][j];
		}
	}
	
	printf( "\n diem trung binh la: %d", sum[j]/4);
}
