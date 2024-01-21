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
void creatLOOP(struct node *root)
{
 int s,d;
 struct node *dest=root;
 //printf("Enter start of loop\n");
 //scanf("%d",&s);
 printf("Enter destination of loop\n");
 scanf("%d",&d);
 while(root!=NULL)
 {
     if((d-1)!=0)
     {
         dest=dest->next;
     }
     root=root->next;
     
 }
 root->next=dest;
}

//Function to Detect LOOP

int detectLoop(struct node *root)
{
   struct node *fast=root;
   struct node *slow=root;
   while(fast!=NULL && slow!=NULL && fast->next!=NULL)
   {
       if(fast==slow && fast!=root)
       {
           return 1;
       }
       fast=fast->next->next;
       slow=slow->next;
   }
  return 0;
}
int main()
{
    int n,Length;
    struct  node *root=NULL;
    printf("Enter no of nodes\n");
    scanf("%d",&n);
    root=createLinkeedList(root,n);
    //creatLOOP(root);
    root->next->next->next=root;
    
    if(detectLoop(root))
    {
        printf("LOOP FOUND");
    }
    else
     printf("NO LOOP FOUND");
    
    return 0;
}
    