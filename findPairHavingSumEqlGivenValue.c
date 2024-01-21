//A program to find pair having sum = Given value
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		int sum,c=0,n;
		int arr[];
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Size of array");
		n=sc.nextInt();
		arr=new int[n];
		
		System.out.println("Eneter the elements of array");
		for(int i=0;i<n;i++)
		{
		    arr[i]=sc.nextInt();
		}
		System.out.println("Enter value of sum");
		sum=sc.nextInt();
		//Finding pairs with sum=given number;
		for(int i=0;i<n;i++)
		{
		    for(int j=i+1;j<n;j++)
		    {
		        if(arr[i]+arr[j]==sum)
		        {
		           System.out.println("pairs are="+arr[i]+" "+arr[j]); 
		        }
		    }
		}
	
	}
}
