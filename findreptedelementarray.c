#include<stdio.h>
void main()
{
int n,i,j,found=0;
printf("Enter size of array\n");
scanf("%d",&n);
int a[n];
printf("Enter elements of array\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
 if(a[i]==a[j])
 {
  found=found+1;
 }
 }

}
printf("duplicate elements are=%d\n",found);
}
