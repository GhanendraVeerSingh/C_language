#include<stdio.h>
#include<conio.h>
#define MAX 1000
int main()
{
    int n,temp,sum;
    int has[MAX]={0};
    printf("Enter array size and Sum value\n");
    scanf("%d%d",&n,&sum);
    int arr[n];
    printf("Enter array Elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //finding pair
    for(int i=0;i<n;i++)
    {
       temp=sum-arr[i];
       if(has[temp]==1)
       {
           printf("Sum of pairs %d and %d is %d\n",arr[i],temp,sum);
       }
       has[arr[i]]=1;
    }
    
}