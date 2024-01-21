#include<stdio.h>
#include<conio.h>
int main()
{
 int l,b,area,breath,per;
 printf("Enter length and breath of rectangle");
 scanf("%d%d",&l,&b);
 area=l*b;
 per=2*(l+b);
 printf("Area of rectangle is =%d\n  Perimter of rectngel is=%d",area,per);
 return(0);
}

