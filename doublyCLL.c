
#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    struct node *next;
    int data;
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

        printf("\nDoubly Circular Linked List Operations:\n");
        printf("\n 1.Insert in Beginning\n 2.Insert at last\n 3.Delete from Beginning\n 4.Delete from last\n 5.Display\n 6.Exit\n");
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
       printf("\nOVERFLOW\n");
   }
   else
   {
    printf("\nEnter Item value\n");
    scanf("%d",&item);
    ptr->data=item;
   if(head==NULL)
   {
      head = ptr;
      ptr -> next = head;
      ptr -> prev = head;
   }
   else
   {
       temp = head;
    while(temp -> next != head)
    {
        temp = temp -> next;
    }
    temp -> next = ptr;
    ptr -> prev = temp;
    head -> prev = ptr;
    ptr -> next = head;
    head = ptr;
   }
   printf("\nNode inserted\n");
}

}
void insert_last()
{
   struct node *ptr,*temp;
   int item;
   ptr = (struct node *) malloc(sizeof(struct node));
   if(ptr == NULL)
   {
       printf("\nOVERFLOW\n");
   }
   else
   {
       printf("\nEnter value\n");
       scanf("%d",&item);
        ptr->data=item;
       if(head == NULL)
       {
           head = ptr;
           ptr -> next = head;
           ptr -> prev = head;
       }
       else
       {
          temp = head;
          while(temp->next !=head)
          {
              temp = temp->next;
          }
          temp->next = ptr;
          ptr ->prev=temp;
          head -> prev = ptr;
      ptr -> next = head;
        }
   }
     printf("\n Node inserted\n");
}

void delete_beginning()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("\n UNDERFLOW\n");
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\n Node deleted\n");
    }
    else
    {
        temp = head;
        while(temp -> next != head)
        {
            temp = temp -> next;
        }
        temp -> next = head -> next;
        head -> next -> prev = temp;
        free(head);
        head = temp -> next;
    }

}
void delete_last()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\n UNDERFLOW\n");
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\n Node deleted\n");
    }
    else
    {
        ptr = head;
        if(ptr->next != head)
        {
            ptr = ptr -> next;
        }
        ptr -> prev -> next = head;
        head -> prev = ptr -> prev;
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
        printf("\List is empty\n");
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


