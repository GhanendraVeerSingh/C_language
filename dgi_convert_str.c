#include<stdio.h>
#include<conio.h>
void main()
{
 int n,count=0,temp;
 char s1[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
 char s2[10][10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
 char s3[13][10]={" "," ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
 char s4[2][10]={"hundred","thousand"};
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
       printf("%s ",s3[n/10]);
	   if(n%10!=0)
	   {
	     printf("%s",s1[n%10]);
	   }	 
      }
	  break;
  case 3:
    if (n/100!=0)
    {
     printf("%s %s ",s1[n/100],s4[0] );
	 n=n%100;
	}
    if(n>0 && n<=9)
	{
	 printf("%s ",s1[n]);
	}
	else if(n<=19)
	{
	 printf("%s ",s2[n%10]);
	}
	else
	{
	 printf("%s ",s3[n/10]);
	 if(n%10!=0)
	 {
	  printf("%s",s1[n%10]);
	 }
	}
    	
  	  
 }
 getch();
}
#made by programming242