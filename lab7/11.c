#include<stdio.h>

main()
{
    int n;
    int num[100];
    int l;
    int desnum[100], k;
    int i, j, temp;
    printf( "\n enter the total number of marks to be entered: ");
    scanf( "%d", &n);

    for (l=0; l<n; l++)
    {
        printf( "\n enter the marks of student %d: ", l+1);
        scanf( "%d", &num[l]);
    }
    
    for (k=0; k<n; k++)
  }

    for (j=i+l; j<n; j++)
    {
        if(desnum[i]<desnum[j])
        {
            temp=desnum[i];
            desnum[i]=desnum[j];
            desnum[j]=temp;
        }
    }
   } 

   for (i=0; i<n; i++)
   printf("\n number at [%d] is %d", i, desnum[i]);
}
