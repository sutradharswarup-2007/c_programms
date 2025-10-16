//Write a c program using a function to reverse the elements of an array
#include <stdio.h>
void reverse(int n,int arr[])
{
	int i;
	printf("Reverse :");
	for(i=n-1;i>=0;i--)
	{
	    printf("%d ",arr[i]);	
	}
}
void main()
{
	int brr[10];
	int a,n,i;
	
	printf("Enter the number of terms :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&brr[i]);
	}
	
	reverse(n,brr);
}
