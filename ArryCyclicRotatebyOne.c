
#include<stdio.h>
#include<conio.h>
 void rotateCyclicByOne(int *arr,int n)
    {
      int b=arr[n-1];
      for(int i=n-2;i>=0;i--)
      {
        arr[i+1]=arr[i];  
          
      }
      arr[0]=b;
    }
void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
}
int main()
{
    int n;
    printf("Enter size of array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    rotateCyclicByOne(arr,n);
    print(arr,n);
     return 0;
}