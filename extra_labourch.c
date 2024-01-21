#include<stdio.h>
#include<conio.h>
 main()
{
 int n,a,s=0,c,i;
 printf("Enter leagle hour of working");
 scanf("%d",&n);
 printf("Enter your hours of working");
 sacnf("%d",&a);
 c=a-n;
 if(c>0)
 {
  for(i=0;i<c;i++)
  {
   s=s+12;
  }
  printf("Extra labour charge is=%d",s);
 }

}
