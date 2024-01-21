#include<stdio.h>
#include<conio.h>
void main()
{
 int a[40],i,j,m,n,M,k=0,CON,b[30];
 printf("Enter size of set A\nenter size of set B");
 scanf("%d%d",&m,&n);
 M=m+n;
 printf("Enter elements of set A\n");
 for(i=0;i<M;i++)
 {
  if(i==m)
  {
   printf("Enter elements of set B\n");
  }
  scanf("%d",&a[i]);
 }
 for(i=0;i<M;i++)
{
 for(j=i+1;j<M;j++)
 {
  if(a[i]==a[j])
  {
   b[k]=a[i];
   k=k+1;
  }
 }
 CON=k;
}
printf("INTERSECTION OF SET A AND B IS={");
for(i=0;i<CON;i++)
{
 printf("%d,",b[i]);
}
printf("}");
}
