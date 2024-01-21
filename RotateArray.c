/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,d;
    printf("Enter size of array and no of element to be rotated\n");
    scanf("%d%d",&n,&d);
    int temp[d],arr[n];
    printf("Enter Elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    //rotation code======
    //copying d Elements in temp
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
   //moving the array element to left by d
    for(int i=d-1;i<n;i++)
    {
        arr[i-(d)]=arr[i];
    }
    //placing the elements from temp into arr starting from (n-1-d-2)
    for(int i=0;i<d;i++)
    {
        arr[(n-1)-(d-1)+i]=temp[i];
    }
    
    //printing
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}
