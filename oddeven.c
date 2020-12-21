//to print the odd and even numbers in an array
#include<stdio.h>
void main()
{

    int a[100], i, n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

        printf("The even numbers of the array are:\n");


    for(i=0; i<n; i++)
    {
       if(a[i] %2 ==0)
       {
           printf("%d \t",a[i]);
       }
    }
    printf("The odd numbers of the array are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d \t",a[i]);
        }
    }
}
