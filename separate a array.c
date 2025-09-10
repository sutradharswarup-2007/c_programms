#include <stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	int b[10],c[10];
	int i,j=0,k=0;
	 
	printf("Before \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("After \n");
	printf("first part of a transfer to b[] :\n");
	for(i=0;i<n/2;i++)
	{
		b[j]=a[i];
		j++;
	}
	
	for(i=0;i<j;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	printf("seceond part of a transfer to c[] :\n");
	for(i=n/2;i<n;i++)
	{
		c[k]=a[i];
		k++;
	}
	
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
