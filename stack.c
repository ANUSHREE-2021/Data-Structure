#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1,stack[MAX];
void push();
void pop();
void display();
void main()
{
    int choice,i;
    while(1)
    {
            printf("\nStack Operations:\n");
            printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
            printf("\nEnter the choice:\n");
            scanf("%d",&choice);
        switch(choice)
        {

        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default :
            printf("\nWrong choice\n");

          }

    }
}

void push()
{
    int value;
    if(top==MAX-1)
    {
        printf("The stack is full\n");

    }
    else
    {
        printf("Enter the value to be inserted\n");
        scanf("%d",&value);
        top++;
        stack[top]=value;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("\nDeleted item is:%d\n",stack[top]);
        top--;
    }
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("\nStack elements are : \n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }

    }
}







