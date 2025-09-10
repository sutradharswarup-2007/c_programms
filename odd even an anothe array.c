#include <stdio.h>
int main()
{
	int arr[]={7,6,8,9,12,36,39};
	int even[10],odd[10];
	int i,j=0,k=0;
	int n=sizeof(arr)/sizeof(arr[0]);
    
	for (i=0;i<n;i++)
	{
	    if (arr[i]% 2 == 0)
	    {
	    	even[j] = arr[i];
	    	j++;
		}
		else
		{
			odd[k] = arr[i];
			k++;
		}
	}
	
	printf("Even no :");
	
	for(i=0;i<j;i++)
	{
		printf("%d ",even[i]);
	}
	
	printf("\n");
	printf("Odd no :");
	
	for(i=0;i<k;i++)
	{
		printf("%d ",odd[i]);
	}
	return 0;
}
