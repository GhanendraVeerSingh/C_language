#include<stdio.h>
#include<stdlib.h>
struct node
{
 int num;
 struct node *next,*prev;
}*start,*end,*current,*pos;

int data;
void create_dublylimkedlist()
{
 int n,i,method;
 printf("Enter number of nodes you want");
 scanf("%d",&n);
 printf("Enter 1 to add a node at beginning\nEnter 0 to add at end");
  scanf("%d",&method);
 for(i=1;i<=n;i++)
{
 current=(struct node *)malloc(sizeof(struct node));
 if(current!=NULL)
 {
  printf("   Enter a number");
  scanf("%d",&data);
  current->num=data;

  if(method==1)
 {
   if(start==NULL)
  {
   start=current;
   end=current;
   start->prev=NULL;
   end->next=NULL;
  }
  else
  {
   current->next=start;
   start->prev=current;
   start=current;
  }
 }
 else
 {
  if(start==NULL)
  {
   start=current;
   end=current;
   start->prev=NULL;
  }
  else
  {
   end->next=current;
   current->prev=end;
   end=current;
   end->next=NULL;
  }
 }
}
}
if(start!=NULL)
{
 int ch;
 printf("Enter 1 to farwoard traversing and 0 to backward");
 scanf("%d",&ch);

 if(ch==1)
 {
  pos=start;
 }
 else
{
 pos=end;
}
 printf("      LINKED LIST IS\n         ************\n    @@@@@@@@@@@@@@@@@@\n");
 while(pos!=NULL)
 {
  printf("@@@@@@");
  printf("           NUMBER = %d\n",pos->num);
  if(ch==1)
  {
   pos=pos->next;
  }
  else
  {
   pos=pos->prev;
  }
 }
}
}

void main()
{
 create_dublylimkedlist() ;
 printf("*********************\n"
        "*****************\n"
        "**************\n   "
        "PROGRAM ENDED##########");
}
