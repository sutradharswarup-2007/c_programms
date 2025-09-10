#include <stdio.h>
#include <stdbool.h>
bool is_prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if (n%i == 0)
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
	printf("Enter the range :");
	scanf("%d %d",&n,&m);	
	for (i=n;i<=m;i++)
	{
		 if (is_prime(i)==true)
		 {
		  printf("%d ",i);
	     }
	}
}
