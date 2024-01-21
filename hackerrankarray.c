#include<stdio.h>
#include<conio.h>
void main()
{
int n,d,m,i,j,sumup=0,a[50],c=0;
printf("Enter you date of birth date of month and no of squars \n");
scanf("%d%d%d",&d,&m,&n);
printf("Enter elements of sqaure block\n");

for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 for(j=i;j<m+i;j++)
 {
  sumup=sumup+a[j];
 }
 if(sumup==d)
 {
  c=c+1;
 }
}
printf("no of pairs = %d",c);

getch();
}
