#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *l;
struct node *r;
};

struct node *root=NULL;

struct node* create()
{
    int n;
    struct node *b;
    printf("ENTER NODE(ENTER -1 FOR NO NODE)\n");
    scanf("%d",&n);
    if(n==-1)
    {
        return NULL;
    }
    else
    {
     b=(struct node*)malloc(sizeof(struct node));
     b->data=n;
     printf("Enter left child\n");
     b->l=create();
     printf("ENTER right child\n");
     b->r=create();
     return b;
    }
}
void travers_preorder(struct node *root)
{
 //ruct node *b=root;
 if(root==NULL)
 {
     return;
 }
 
 travers_preorder(root->l);
 
 travers_preorder(root->r);
 printf("%d ",root->data);
 
}

void main()
{
 struct node *root=NULL;
 root=create();
 travers_preorder(root);
}