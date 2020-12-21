//to print sum of two numbers using pointers
#include<stdio.h>
main()
{
    int num1,num2,sum=0;
    int *ptr1, *ptr2;

    ptr1=&num1;
    ptr2=&num2;
    printf("enter the two numbers \n");
    scanf("%d%d",&num1,&num2);
    sum= *ptr1 + *ptr2;
    printf("Sum =%d\n",sum);
}
