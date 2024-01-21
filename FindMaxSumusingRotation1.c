#include<stdio.h>
int rotateMaxSum(int *arr,int n)
{
     int temp,sum,sum1=0;
    
    for(int j=1;j<n;j++)
    {
      temp=arr[0];
      sum=0;
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++)
    {
        sum=sum+(arr[i]*i);
    }
    if(sum1<=sum)
    {
        sum1=sum;
    }
  }
  return sum;
}
int main()
{
    int n,res;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    res=rotateMaxSum(arr,n);
   
    
    printf("Maximum sum= %d",res);
    return 0;
}