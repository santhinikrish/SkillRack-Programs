/*
You are given an array of positive numbers. find a minimum number which is not present in the list which cannot be represented as the combination of numbers in the array.
INPUT:
4
1 2 5 6
OUTPUT:
4
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,ans=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++)//bubble sort
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(ans>=a[i])
        {
            ans+=a[i];
        }
        else
        {
          break;
        }
    }
    printf("%d",ans);
}


or


import java.util.*;
public class Main {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
	int a[]=new int[n];
	for(int i=0;i<n;i++){
		a[i]=sc.nextInt();
	}
	Arrays.sort(a);
	int ans=1;
	for(int i=0;i<n;i++)
    	{
            if(ans>=a[i])
            {
                ans+=a[i];
            }
            else
            {
                break;
            }
        }
    	System.out.print(ans);
    }
}
