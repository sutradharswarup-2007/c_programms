//use a function to take the array and its size as parameters and return the total sum
#include <stdio.h>
int sum(int a[],int n)
{
	int sum,i;
	for(i=0;i<n;i++)
	{
	   sum = sum + a[i];
    }
	return sum;
}
int main()
{
	int arr[10];
	int n,i,a;
	
	printf("Enter the number of terms :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	a=sum(arr,n);
	printf("\n");
	printf("Total sum :%d ",a);
}
