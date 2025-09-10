#include <stdio.h>
long int fact(int a)
{
    long int fact=1;
	int i;
	for (i=1;i<=a;i++)
	{
		fact = fact * i;
	}
	return fact;
}
int main()
{
	int a , b , i;
	long int n;
	printf("Enter the range :");
	scanf("%d %d",&a,&b);
	for (i=a;i<=b;i++)
	{
		n=fact(i);
		printf("fact : %ld\n",n);
	}
}
