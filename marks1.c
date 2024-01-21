#include<stdio.h>
#include<conio.h>;
int main()
{
 int eng,math,sci,total;
 float per;
 printf("Enter marks of eng,math sci");
 scanf("%d%d%d",&eng,&math,&sci);
 total=eng+math+sci;
 per=total*100/300;
 printf("TOTAL=%d\nPERCENTAGE=%f",total,per);
}
