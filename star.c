//To print star pyramid
#include<stdio.h>
main()
{	
	int i,j,rows;
	printf("Enter the number of rows\n");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
			printf("\n");

        }

}                   

