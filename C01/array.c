//To print the sum of the elements of the array
#include<stdio.h>
main()
{	
	int a[30],i,n,sum=0;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];

	}
	printf("Sum=%d\n",sum);

}
