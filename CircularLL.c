#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void insert_beginning();
void insert_last();
void delete_beginning();
void delete_last();
void display();
void main ()
{
    int choice;
    while(1)
    {

        printf("\nCircular Linked List Operations:\n");

        printf("\n 1.Insert at beginning\n 2.Insert at last\n 3.Delete from Beginning\n 4.Delete from last\n 5.Display\n 6.Exit\n");
        printf("\nEnter your choice:\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
            insert_beginning();
            break;
            case 2:
            insert_last();
            break;
            case 3:
            delete_beginning();
            break;
            case 4:
            delete_last();
            break;
            case 5:
            display();
            break;
            case 6:
            exit(0);
            break;
            default:
            printf("\nWrong choice\n");
        }
    }
}
void insert_beginning()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");


    }
    else
    {
        printf("\nEnter the node data:\n");
        scanf("%d",&item);
        ptr -> data = item;
        if(head == NULL)
        {
            head = ptr;
            ptr -> next = head;
        }
        else
        {
            temp = head;
            while(temp->next != head)
                temp = temp->next;
            ptr->next = head;
            temp -> next = ptr;
            head = ptr;
        }
        printf("\n Node inserted\n");
    }

}
void insert_last()
{
    struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW\n");


    }
    else
    {
        printf("\nEnter Data:\n");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL)
        {
            head = ptr;
            ptr -> next = head;
        }
        else
        {
            temp = head;
            while(temp -> next != head)
            {
                temp = temp -> next;
            }
            temp -> next = ptr;
            ptr -> next = head;
        }

        printf("\n Node inserted\n");
    }

}

void delete_beginning()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nUNDERFLOW");


    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\n Node deleted\n");
    }

    else
    {   ptr = head;
        while(ptr -> next != head)
            ptr = ptr -> next;
        ptr->next = head->next;
        free(head);
        head = ptr->next;
        printf("\n Node deleted\n");

    }
}
void delete_last()
{
    struct node *ptr, *preptr;
    if(head==NULL)
    {
        printf("\nUNDERFLOW");


    }
    else if (head ->next == head)
    {
        head = NULL;
        free(head);
        printf("\n Node deleted\n");

    }
    else
    {
        ptr = head;
        while(ptr ->next != head)
        {
            preptr=ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr -> next;
        free(ptr);
        printf("\n Node deleted\n");

    }
}

void display()
{
    struct node *ptr;
    ptr=head;
    if(head == NULL)
    {
        printf("\n List is empty\n");


    }
    else
    {
        printf("\n printing values ... \n");

        while(ptr -> next != head)
        {

            printf("%d\n", ptr -> data);
            ptr = ptr -> next;
        }
        printf("%d\n", ptr -> data);
    }

}
