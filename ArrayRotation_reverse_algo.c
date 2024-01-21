//Time Complexity=O(n)
//Auxilary Space= O(1)
#include<stdio.h>
#include<conio.h>
void reverseArray(int *arr,int start,int end)
{
    int b;
    while(start<end)
    {
      b=arr[start];
      arr[start]=arr[end];
      arr[end]=b;
      start++;
      end--;
    }
}

void rotateArray(int *arr,int n,int d)
{
    if(d==0)
    {
     printf("Rotation cant be performed\n");
    }
    //d=d%n;
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);
}

int main()
{
    int n,d;
    printf("Enter size of array and no of elements to be rotated\n");
    scanf("%d%d",&n,&d);
    int arr[n];
    printf("Enter Elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    rotateArray(arr,n,d);
     
    for(int i=0;i<n;i++)
     {
         printf("%d ",arr[i]);
     }
     return 0;
}