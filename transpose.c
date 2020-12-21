//to print transpose of the matrix
#include<stdio.h>
main()
{
	int a[30][30],b[30][30],n,m,i,j;
	printf("enter the row size and column size of the matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the array elements\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];

		}
	}

	        printf("transpose of the matrix \n");
		for(i=0;i<m;i++)
		{
			printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d",b[i][j]);	
		}
		}

}
