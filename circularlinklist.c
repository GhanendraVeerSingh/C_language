#include<stdio.h>
#include<stdlib.h>
struct node
{
 int num;
 struct node *next;
}*start=NULL,*end=NULL,*current;
void create_circularlinkedlist()
{
 struct node *pos;
 int i,n,data;
 printf("Enter no of nodes you want\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  current=(struct node*)malloc(sizeof(struct node));
  if(current!=NULL)
  {
   printf("Eter a number");
   scanf("%d",&data);
   current->num=data;
   if(start==NULL)
   {
    start=current;
    end=current;
   }
   else
   {
    current->next=start;
    start=current;
    end->next=start;
   }
  }
 else
 {
  printf("Memory cant be created");
 }
 }
 if(start!=NULL)
 {
  pos=start;
  printf("NUMBERS OF LIST ARE\n");
  while(pos->next!=start)
  {
   printf("%d\n",pos->num);
   pos=pos->next;
  }
  printf("%d\n",pos->num);
 }
}
void creatcircularlinkedlist()
{
 struct node *pos,*start=NULL;
 int i,n,data;
 printf("Enter no of nodes you want\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  current=(struct node*)malloc(sizeof(struct node));
  if(current!=NULL)
  {
   printf("Eter a number");
   scanf("%d",&data);
   current->num=data;
   if(start==NULL)
   {
    start=current;
    end=current;
   }
  else
  {
   end->next=current;
   end=current;
   end->next=start;
  }
 }
 else
 {
  printf("Memory is not created");
 }
 }
 if(start!=NULL)
 {
 printf("LIST IS\n");
 pos=start;
 while(pos->next!=start)
 {
  printf("%d\n",pos->num);
  pos=pos->next;
 }
 printf("%d\n",pos->num);
 }
}

void main()
{
 create_circularlinkedlist();
 creatcircularlinkedlist();
}
