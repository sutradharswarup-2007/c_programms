#include <stdio.h>
int maximum(int arr[],int n)
{
	int max=arr[0];
	int i;
	for (i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	return max;
}
int minimum(int arr[],int n)
{
	int min=arr[0];
	int i;
	for (i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
		}
	return min;
}
int main()
{
	int arr[10];
	int i,n;
	int a,b;
	
	printf("Enter the number of terms :");
	scanf("%d",&n);
	
	if(n>=10)
	{
		printf("Maximum allowed size is 10.");
	}
		
	else
	{
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&arr[i]);
	    }
    } 
	
	a = maximum(arr,n);
	b = minimum(arr,n);
	printf("Maximum = %d",a);
	printf("\nMinimum = %d",b);
	return 0;
}
