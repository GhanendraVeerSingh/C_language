#include<stdio.h>
#include<conio.h>
int que[100],front=-1,rear=-1;
void traverse();
void enque()
{
 int num;
 if(front!=sizeof(que)-1)
 {
  printf("Enter a numbere that you want to insert in queue\n");
  scanf("%d",&num);
  if(front==-1)
  {
   front=rear=0;
  }
  else
  {
   rear=rear+1;

  }
  que[rear]=num;
 }
 else
 {
  printf("Queue is full\n");
 }
}
void deque()
{
 int n;
 if(front!=-1)
 {
  n=que[front];
  printf("%d is deleted from the queure",n);
  front=front+1;
 }
}
void traverse()
{
 int i;
 printf("Elements of queue are\n");
 for(i=front;i<=rear;i++)
 {
  printf("%d ",que[i]);

 }
}
void main()
{
 int ch;
 do
 {
  //int ch;
  printf("Enter 1 to insert an elements in queue\n"
      "Enter 2 to delete an element from queue\n"
      "Enter 3 to display elements of queue\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
    enque();
    break;
   case 2:
    deque();
    break;
   case 3:
    traverse();
  }
 printf("Enter 4 to continue\n");
 scanf("%d",&ch);
 }while(ch==4);
}
