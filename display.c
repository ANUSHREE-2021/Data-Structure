//To print read and display the elemnts of the array
#include<stdio.h>
main()
{
	int a[30],i,n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	
		scanf("%d\n",&a[i]);
	
	printf("The array elements are:\n");
	for(i=0;i<n;i++)
	
		printf("%d\n",a[i]);
	
	
	
}
