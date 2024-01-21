#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void traverse();
struct node
{
 int data;
 struct node *next;
};
struct node *top=NULL,*current;
void push()
{
  int n;
 current=(struct node*)malloc(sizeof(struct node));
 if(current!=NULL)
 {
   printf("Enter a element that you want to push onto stack\n");
   scanf("%d",&n);
   current->data=n;
   if(top==NULL)
   {
     top=current;
     top->next=NULL;
   }
  else
  {
    current->next=top;
    top=current;

  }
 }
  else
  {
    printf("Memory is not aviable\n");
  }

 traverse();
}
void pop()
{
 int n;
 if(top==NULL)
 {
  printf("Stack is underflow\n");
 }
 else
 {

   struct node *pos;
   n=top->data;
   pos=top;
   top=top->next;
   free(pos);
   printf("%d is popped from the stack",n);
 }
}
void traverse()
{
 if(top==NULL)
 {
   printf("stack is empty\n");
 }
 else
 {
   struct node *pos=top;

  while(pos!=NULL)
  {
    printf("%d",pos->data);
    pos=pos->next;

  }
 }
}

  void main()
  {
   int choice,ch;
    do
   {

    printf("Enter 1 to push\nEnter 2 to pop\n");
    scanf("%d",&choice);
    switch(choice)
    {
  case 1:
    push();
    break;
  case 2:
    pop();
    break;
  //case 4:
    //exit(0);
  default:
    printf("INVALID CHOICE\n");
    }
   printf("\nEnter 3 to continue\n");
   scanf("%d",&ch);
  }while(ch==3);
  getch();
}
