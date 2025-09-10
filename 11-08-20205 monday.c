#include <stdio.h>
#include <stdbool.h>
bool prime(int n)
{
	int i,c=0;
	for (i=1;i<=n;i++)
	{
		if (n % i == 0)
		c++;
	}
	if (c == 2)
	  return true;
	else
	  return false;  
}
int main()
{
int arr[20];
int i,j,n;
bool f;
printf("Enter the number of term :");
scanf("%d",&n);
for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (j=0;j<arr[i];j++)
	{
		if (prime(arr[i])==true)
		 printf("%d is prime number\n",arr[i]);
		else
		 printf("%d is composite number\n",arr[i]); 
	}
    return 0; 
}
