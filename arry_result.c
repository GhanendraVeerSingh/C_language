#include<stdio.h>
#include<conio.h>
int main()
{
 int n,m,i,j,marks[n][m];
 printf("Enter no of students in class and no of subjects of eachstudents");
 scanf("%d%d",&n,&m);
 for(i=0;i<n;i++)
 {
  printf("Enter marks of student%d",i);
  /*for(j=0;j<m;j++)
  {
   printf("enter marks of sub %d",j);
   scanf("%d",marks[i][j]);
  }*/
 }
 return 0;
}


