#include<stdio.h>
int main()
{
	int arr[]={1,2,3},brr[]={4,
	
	5,6,7,8,9,10};
	int n1=sizeof(arr)/sizeof(arr[0]);
	int n2=sizeof(brr)/sizeof(brr[0]);
	int n3=n1+n2;
	int crr[n3];
	int i,j=0,k=0;
	
	for(i=0;i<n1;i++)
	{	
			crr[i]=arr[i];
		
	}
	for(i=n1;i<n3;i++)
	{
	    	crr[i]=brr[k];
	    	k++;
	}		
	for(i=0;i<n3;i++)
	{
		printf("%d ",crr[i]);
	}
	return 0;
}
