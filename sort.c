//to sort n number of array
#include<stdio.h>
main()
{
	int a[30],i,j,temp,n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
		
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

