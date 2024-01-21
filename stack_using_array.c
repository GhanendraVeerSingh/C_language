#include<stdio.h>
#include<conio.h>
int stack[50],top=-1;
void traverse();
void push()
{
  if(top!=(sizeof(stack)-1))
  {
   int num;
   top++;
   printf("Enter a number that you wnt to push onto the stack\n");
   scanf("%d",&stack[top]);
   traverse();
  }
  else
  {
    printf("Stack is full\n");
  }
}
void pop()
{
 int num;
 if(top!=-1)
 {
  num=stack[top];
 printf("%d is popped from top= %d\n",num,top);
 top=top-1;
 traverse();
 }
}
void traverse()
{


 if(top!=-1)
 {
  int i;
  printf("\nELEMENTS OF STACK ARE\n");
  for(i=top;i>=0;i--)
  {
    printf("%d ",stack[i]);
  }
 }
  else
  {
   printf("NO ELEMENT IN STACK\n");
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


