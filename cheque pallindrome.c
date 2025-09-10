#include <stdio.h>
int main()
{
	int arr1[]={1,2,3,2,1},arr2[20];
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int i,j;
	int flag=0;
	
	for(j=n-1;j>=0;j--)
	{
		arr2[i]=arr1[j];
		i++;
	}
	
	for(i=0;i<n;i++)
	{
		if (arr1[i]!=arr2[i])
		{
			flag=1;
			break;
		}
	}
	if (flag == 0)
	 printf("This array is pallindrome");
	else
 	 printf("This is not a pallindrome array");
}
