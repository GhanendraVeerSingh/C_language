#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,found=0,lower,upper,mid,num;
printf("Enter how many elements  you want to store in arrray\n");
scanf("%d",&n);
printf("Enter elements of array\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("Enter a number to be searched\n");
scanf("%d",&num);
lower=0;
upper=n-1;
while(lower<=upper)
{
 mid=(lower+upper)/2;
 if(a[mid]==num)
 {
  found=1;
  printf("%d is found at location%d\n",num,mid);
  break;
 }
 else if(num<a[mid])
 {
  upper=mid-1;
 }
 else
 {
  lower=mid+1;
 }
}
if(found==0)
{
 printf("%d is not present in array\n");
}
getch();
}
