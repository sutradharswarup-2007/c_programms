// Reverse an array
#include <stdio.h>
int main()
{

	int arr[20];
	int n,i;
	
	printf("Enter the number of terms :");
	scanf("%d",&n);
	
	printf("Enter the number :");
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for (i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
