#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,n,found=0,num;
 printf("Enter the number of elements that you want in array\n");
 scanf("%d",&n);
 printf("Enter the elements of array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);

 }
 printf("Enter anumber you want to search\n");
 scanf("%d",&num);
 for(i=0;i<n;i++)
 {
  if(num==a[i])
  {
   found=1;
   printf("%d is found at addrress=%d\n",num,i);
  }
 }
 getch();
}
