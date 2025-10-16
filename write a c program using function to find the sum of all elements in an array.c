//write a c program using function to find the sum of all elements in an array
#include <stdio.h>
int sum(int n)
{
	int sum;
	sum = sum + n;
	return sum;
}
int main()
{
	int arr[]={12,7,6,8,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int a,i;
	
	for(i=0;i<n;i++)
	{
		a=sum(arr[i]);
	}
	printf("sum :%d",a);
	return sum;
}
