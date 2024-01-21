//Program to fin the length of a linked list 
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

void PrintList(struct node *root)
{
    while(root!=NULL)
    {
        printf("%d ",root->data);
        root=root->next;
    }
}

//Function to Find Lenght of List

int findLength(struct node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    return 1+findLength(root->next);
}
int main()
{
    int n,Length;
    struct  node *root=NULL;
    printf("Enter no of nodes\n");
    scanf("%d",&n);
    root=createLinkeedList(root,n);
    Length=findLength(root);
    printf("Elements of Linked List are \n");
    PrintList(root);
    printf("\nLength of Linked List is = %d\n",Length);
    return 0;
}
    