#include<stdio.h>
#include<stdlib.h>

struct node
{
 int num;
 struct node *next;
}*current,*end=NULL,*start=NULL;
void create_linklist()//INSERTION AT BEGINING
{

int n,i,data,sum=0;
printf("Enter no of node you want to create");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 current=(struct node*)malloc(sizeof(struct node));
 if(current!=NULL)
 {
  printf("Enter a number");
  scanf("%d",&data);
  current->num=data;
   if(start==NULL)
   {
    start=current;
    end=current;
    end->next=NULL;
   }
  else
  {
   current->next=start;
   start=current;
  }
 }
else
{
 printf("Memory is not created");
}
}
 if(start!=NULL)
 {
  struct node *pos;
  pos=start;

  while(pos!=NULL)
  {
   printf("NUMBER = %d\n",pos->num);
   sum=sum+pos->num;
   pos=pos->next;
  }
  printf("Sum of LINLIST is = %d",sum);
 }

}
void createlinklist()
{
 struct node *start=NULL,*end=NULL;
 int n,i,data,sum=0;
printf("Enter no of node you want to create");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 current=(struct node*)malloc(sizeof(struct node));
 if(current!=NULL)
 {
  printf("Enter a number");
  scanf("%d",&data);
  current->num=data;
   if(end==NULL)
   {
    end=current;
    start=current;
   }
   else
   {
    end->next=current;
    end=current;
    end->next=NULL;
   }
}
else
{
 printf("Memory is not created");
}
}
if(start!=NULL)
 {
  struct node *pos;
  pos=start;

  while(pos!=NULL)
  {
   printf("NUMBER = %d\n",pos->num);
   sum=sum+pos->num;
   pos=pos->next;
  }
  printf("Sum of linked list is= %d",sum);
 }

}

//TRAVERSING THE LINKED LIST
/*void traverse_linkedlist()
{
 if(start!=NULL)
 {
  struct node *pos;
  pos=start;

  while(pos=NULL)
  {
   printf("NUMBER = %d\n",pos->num);
  }
 }
}
}*/
void main()
{
 create_linklist();
 createlinklist();
}
