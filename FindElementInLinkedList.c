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

void PrintList(struct node *root)
{
    while(root!=NULL)
    {
        printf("%d ",root->data);
        root=root->next;
    }
}

//Function to Find Lenght of List

int findElement(struct node *root,int Item)
{
    int pos=0;
    if(root==NULL)
    {
        return -pos;
    }
    if(root->data==Item){
      return pos;  
    }
    else
     findElement(root->next,Item);
}
int main()
{
    int n,pos,Item;
    struct  node *root=NULL;
    printf("Enter no of nodes\n");
    scanf("%d",&n);
    root=createLinkeedList(root,n);
    printf("Enter the number you want to search\n");
    scanf("%d",&Item);
    pos=findElement(root,Item);
    printf("Elements of Linked List are \n");
    PrintList(root);
    printf("\n%d is found at %d\n",Item,pos+2);
    return 0;
}
    