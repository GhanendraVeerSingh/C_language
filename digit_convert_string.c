#include<stdio.h>
#include<conio.h>
void main()
{
 int n,count=0,temp;
 char s1[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
 char s2[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen",
            "nineteen"};
 char s3[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
 char s4[]={"hundred","thousand"};
 printf("Enter a number");
 scanf("%d",&n);
 temp=n;
 while(temp!=0)
 {
  count++;
  temp=temp/10;

 }
 switch(count)
 {
  case 1:
      printf("%s",s1[n]);
      break;
  case 2:
      if(n<20)
      {
       printf("%s",s2[n%10]);
      }
      else
      {
       printf("%s %s",s3[n/10],s1[n%10]);
      }
 }
 getch();
}
