//to print trace of the matrix
#include<stdio.h>
main()
{
    int a[50][50],j,i,n,sum=0,m;
    printf("Enter the row size and column size of the matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of the array\n");
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
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("Trace of the matrix=%d",sum);
}
