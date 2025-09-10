#include <stdio.h>
int main()
{
	int arr[20],frr[100]={0};
	int i,n;
	
	printf("Enter the numebr of terms :");
	scanf("%d",&n);
	
	printf("Enter the number :");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		frr[arr[i]]++;
	}
	
	printf("frequency of this arry\n");
	
	for(i=0;i<100;i++)
	{
		if (frr[i] >= 1)
		{
			printf("%d : %d\n",i,frr[i]);
		}
	}
	return 0;
}
