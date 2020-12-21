//to print average of the no of elements
#include<stdio.h>
main()
{
    int a[40],i,n,sum=0,average;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the number %d=",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    average=sum/n;
    printf("average=%d",average);



}
