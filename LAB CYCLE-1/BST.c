#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value; //node will store an integer
    struct node *right_child;
    struct node *left_child;
}*root=NULL, *temp=NULL;
void delete();
void insert();
void delete1();
void create();
void search(struct node *root);
void search1(struct node *root,int data);

void main()
{
    int choice;

    printf("\nOPERATIONS:\n");
    printf("\n 1 - Insert an element into tree\n");
    printf("\n 2 - Delete an element from the tree\n");
    printf("\n 3 - search an element in the tree\n");
    printf("\n 4 - Exit\n");
    while(1)
    {
        printf("\nEnter your choice :\n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;

        case 3:
            exit(0);
        default :
            printf("\nWrong choice, Please enter correct choice\n");
            break;
        }
    }
}

void struct node* search(struct node *root, int x)
{
    if(root==NULL || root->data==x) //if root->data is x then the element is found
        return root;
    else if(x>root->data) // x is greater, so we will search the right subtree
        return search(root->right_child, x);
    else //x is smaller than the data, so we will search the left subtree
        return search(root->left_child,x);
}


//function to create a node
void create()
{
    int data;
    printf("Enter data of the node to be inserted:\n");
    scanf("%d",&data);
    temp= (struct node *)malloc(sizeof(struct node));
    temp->value = data;
    temp->left_child = NULL;
    temp->right_child = NULL;


}

struct node* insert(struct node *root, int x)
{
    //searching for the place to insert
    if(root==NULL)
        return new_node(x);
    else if(x>root->data) // x is greater. Should be inserted to right
        root->right_child = insert(root->right_child, x);
    else // x is smaller should be inserted to left
        root->left_child = insert(root->left_child,x);
    return root;
}

// function to delete a node
void delete1(struct node *root, int x)
{
    //searching for the item to be deleted
    if(root==NULL)
        return NULL;
    if (x>root->data)
        root->right_child = delete(root->right_child, x);
    else if(x<root->data)
        root->left_child = delete(root->left_child, x);
    else
    {
        //No Children
        if(root->left_child==NULL && root->right_child==NULL)
        {
            free(root);
            return NULL;
        }

        //One Child
        else if(root->left_child==NULL || root->right_child==NULL)
        {
            struct node *temp;
            if(root->left_child==NULL)
                temp = root->right_child;
            else
                temp = root->left_child;
            free(root);
            return temp;
        }

        //Two Children
        else
        {

        }
    }
    return root;
}
void search(stuct node *root)
{
    if((temp->value > root->value) && (root->right_child!=NULL))
         search(root->right_child);
    else if ((temp->value > root->value) && (root->right_child == NULL))
        root->right_child = temp;
    else if ((temp->value < root->value) && (root->left_child != NULL))    /* value less than root node value insert at left */
        search(root->left_child);
    else if ((temp->value < root->value) && (root->left_child == NULL))
        root->left_child = temp;
}


