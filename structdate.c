#include<stdio.h>

struct date
 {
  int year,month,day;
 };
int main()
{
 struct date DATE;
 int ch;
 printf("Enter year month and date");
 scanf("%d%d%d",&DATE.year,&DATE.month,&DATE.day);
 //printf("Date= %d/%d/%d",DATE.day,DATE.month,DATE.year);

 printf("Enter your choice\n 1 for dd/mm/yy\n2 for yy/mm/dd\n3for mm/dd/yy\n");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
      printf("Date = %d/%d/%d",DATE.day,DATE.month,DATE.year);
      break;
  case 2:
      printf("Date= %d/%d/%d",DATE.year,DATE.month,DATE.day);
      break;
  case 3:
      printf("Date= %d/%d/%d",DATE.month,DATE.day,DATE.year);
      break;
  default :
  printf("Iinvalid choicce");
 }
 return(0);
}
