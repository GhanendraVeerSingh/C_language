#include<stdio.h>
#include<stdlib.h>
#define table_size 10
struct node
{
    int data;
    struct node *next;
};
struct node *head[table_size]={NULL},*current;
void insertNode()
{
    int i,key;
    struct node *temp;
    printf("Enter the Key to be inserted\n");
    scanf("%d",&key);
    i=key%10;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=key;
    current->next=NULL;
    if(head[i]==NULL)
    {
        head[i]=current;
    }
    else{
        temp=head[i];
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=current;
    }
}
int Search()
{
    int key,i=0;
    struct node *temp;
    printf("Enter the element to be searched\n");
    scanf("%d",&key);
    i=key%table_size;
    if(head[i]==NULL)
    {
        printf("Element %d is not found in list\n",key);
    }
    else
    {
      temp=head[i];
      while(temp!=NULL)
      {
          if(temp->data==key)
          {
              printf("Element %d is found\n",key);
              break;
          }
          temp=temp->next;
          
      }
      if(temp==NULL)
      {
          printf("Element %d is not found\n",key);
      }
    }
}
void display()
{
    int i;
    struct node *temp;
    for(int i=0;i<table_size;i++)
    {
        if(head[i]==NULL)
        {
           continue; 
        }
        else{
        
         temp=head[i];
         while(temp!=NULL)
         {
             printf("%d ",temp->data);
             temp=temp->next;
         }
         printf("\n");
        }
        
    }
}
int main()
{
    int choice,cont=1;
    while(cont==1)
    {
      printf("Enter 1 for Insert\nEnter 2 for Search\nEnter 3 for display\n");
      scanf("%d",&choice);
      switch(choice)
       {
         case 1:
           insertNode();
           break;
         case 2:
           Search();
           break;
         case 3:
           display();
       }
    printf("Enter 0 to Exit and 1 to continue\n");
    scanf("%d",&cont);
    }
}
