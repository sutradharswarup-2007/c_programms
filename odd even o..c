#include <stdio.h>
int main()
{
	int arr[10];
	int i,n;
	
	printf("Enter the number of term :");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i<n;i++)
	{
		if (arr[i]%2==0)
		 printf("even no =%d\n",arr[i]);
		else
		 printf("odd no = %d\n",arr[i]);
	}
	return 0;
}
