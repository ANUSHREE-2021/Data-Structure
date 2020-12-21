//to print the count of positive ,negative and zeros in an array
#include<stdio.h>
main()
{
	int a[30],n=0,i,p=0,z=0,b;
	printf("Enter the size of the array\n");
	scanf("%d",&b);
	printf("Enter the array elements\n");
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<b;i++)
	{
		if(a[i]>0)
		{
			p++;
		}
		else if(a[i]==0)
		{
			z++;
		}
		else if(a[i]<0)
		{
			n++;

		}
	}
		printf("Postive number=%d\n Negative number=%d\n Zeros=%d\n",p,n,z);
}
