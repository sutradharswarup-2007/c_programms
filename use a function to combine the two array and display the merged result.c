#include <stdio.h>
void merge(int arr[],int brr[],int crr[],int n1,int n2,int n3)
{
	int i,j,k=0;
	for(i=0;i<n1;i++)
	{
		crr[i]=arr[i];
	}
	for(j=n1;j<n3;j++)
	{
		crr[j]=brr[k];
		k++;
	}
	
}
void display(int crr[],int n3)
{
 int i=0; 
 for(i=0;i<n3;i++) 
 {
 	printf("%d ",crr[i]);
	  } 	
}
int main()
{
	int arr[]={1,2,3,4,5};
	int brr[]={6,7,8,9,10};
	int crr[20];
	int n1=sizeof(arr)/sizeof(arr[0]);
	int n2=sizeof(brr)/sizeof(brr[0]);
	int n3=n1+n2;
	merge(arr,brr,crr,n1,n2,n3);
	display(crr,n3);
}
