#include <stdio.h>
int main()
{
	int arr[]={1,2,3,4,5},frr[10];
	int n=sizeof(arr) / sizeof(arr[0]);
	int k,i;
	int j=0;
	
	printf("Enter the number :");
	scanf("%d",&k);
	
	for (i=k;i<n;i++)
	{
		frr[j]=arr[i];
		j++;
	}
	
	for(i=0;i<=k;i++)
	{
		frr[j]=arr[i];
		j++;
	}
	
	for (i=0;i<j;i++)
	{
		printf("%d ",frr[i]);
	}
}
