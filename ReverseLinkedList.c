#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* creatLinkedList(struct node *root,int n)
{
    int d1;
    struct node *current=NULL;
    for(int i=0;i<n;i++)
    {
        struct node *temp;
        printf("Enter the number\n");
        scanf("%d",&d1);
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=d1;
        if(root==NULL)
        {
            root=temp;
            current=temp;
        }
        else{
            current->next=temp;
            current=temp;
        }
        current->next=NULL;
    }
    return root;
}

struct node * ReverseList(struct node *Head)
{
    struct node *current=Head,*prev=NULL,*Next=NULL;
    while(current!=NULL)
    {
     Next=current->next;
     current->next=prev;
     prev=current;
     current=Next;
    }
    Head=prev;
    return prev;
        
}
void PrintLinkdList(struct node *head)
{
 while(head!=NULL)
 {
     printf("%d",head->data);
     head=head->next;
 }
}
int main()
{
    int n;
    struct node *root=NULL,*Head;
    printf("Enter number of node\n");
    scanf("%d",&n);
    root=creatLinkedList(root,n);
    PrintLinkdList(root);
    Head=ReverseList(root);
    printf("\nList after revrse operation\n");
    PrintLinkdList(Head);
    
    return 0;
    
}