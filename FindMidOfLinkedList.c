//Program to find Given element in a linked list 
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

//Creating list

struct node* createLinkeedList(struct node *Head,int n)
{
    struct node *temp;
    for(int i=0;i<n;i++)
  {
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter %d number",i+1);
    scanf("%d",&temp->data);
    if(Head==NULL)
    {
        Head=temp;
        Head->next=NULL;
    }
    else
     temp->next=Head;
     Head=temp;
  }
  return Head;
}

//Prints the List

void PrintList(struct node *Root)
{
    while(Root!=NULL)
    {
        printf("%d ",Root->data);
        Root=Root->next;
    }
}

//Function to Find Mid of List

int findMid(struct node *fast,struct node *slow)
{
 
    if (head!=NULL)
    {
        while (fast != NULL && fast->next != NULL)
        {
            fast= fast->next->next;
            slow= slow->next;
        }
        return slow->data;
    }
    
}
int main()
{
    int n;
    struct  node *root=NULL,*fast,*slow;
    printf("Enter no of nodes\n");
    scanf("%d",&n);
    root=createLinkeedList(root,n);
    fast=root;
    slow=root;
    printf("Elements of Linked List are \n");
    PrintList(root);
    printf("\nMiddle Element is= %d\n",findMid(fast,slow));
    return 0;
}
    