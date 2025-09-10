#include <stdio.h>
int main()
{
	int arr[10];
	int i,n,max,min;
	
	printf("Enter the number of terms :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	max = arr[0];
	min = arr[0];
	
	for(i=0;i<n;i++)
	{
		if (max<arr[i])
		 max=arr[i];
		
		if(min>arr[i])
		 min=arr[i];
	}
	printf("max = %d\n",max);
	printf("min = %d\n",min);
	return 0;
}
