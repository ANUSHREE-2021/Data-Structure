//to swap two numbers using pointers
#include<stdio.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a= *b;
    *b =t;
}
void main()
{
    int num1,num2;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    printf("Before swapping:\n num1=%d\n num2=%d\n",num1,num2);
    swap(&num1,&num2);
    printf("After swapping:\n num1=%d\n num2=%d\n",num1,num2);
    return 0;
}
