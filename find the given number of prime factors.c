#include <stdio.h>
#include <stdbool.h>
bool prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if (c==2)
	 return true;
	else 
	 return false; 
}
int main()
{
	int num,i;
	bool f;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	printf("prime factors are :");
	
	for (i=1;i<=num;i++)
	{
		if (num%i==0)
		{
	    	if(prime(i)==true)
	     	{
				printf("%d ",i);
	    	}
    	}
	}
	return 0;
}
