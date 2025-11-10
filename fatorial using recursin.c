#include <stdio.h>
int factorial(int n)
{
	if(n ==0)
	{
	return 1;
	}
	else
	{
	return n * factorial(n-1);
	}
	
}
int main()
{
	int b,num;
	printf("Entre the number : ");
	scanf("%d",&num);
	b=factorial(num);
	printf("%d",b);
	
}
