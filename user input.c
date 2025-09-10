#include <stdio.h>
#include <stdbool.h>
bool isprime(int n)
{
	int i,c=0;
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if (c==2)
	  return true;
	else 
	  return false;
}
int main()
{
	int n,m,i;
	bool f;
	for (i=1;i<=10;i++)
	{
		printf("Enter the number %d:",i);
		scanf("%d",&n);
		if (isprime(n)==true)
		  printf("%d is a prime no.\n",n);
		else 
		  printf("%d is a composite no.\n",n);
	}
	return 0;
}
