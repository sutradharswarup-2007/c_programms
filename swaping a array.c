#include <stdio.h>
int main()
{
	int arr[]={2,1,7,5,11,30,20,40,35,50};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i,t,j=0;
	
	for (i=0;i<n;i++)   // here i=first element and j=seceond element.
	{
		for (j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	
	printf("After Swapping :\n");
	
	for(i=0;i<n;i++)
	{
	  printf("%d ",arr[i]);
    }
	return 0;
}
