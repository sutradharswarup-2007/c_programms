#include <stdio.h>
int GCD (int a,int b)
{
	int i,gcd;
	for (i=1;i<=a && i<=b;i++)
	{
		if (a%i==0 && b%i==0)
		{
		gcd=i;
	    }
	}
	return gcd;
}
int main()
{
	int num1,num2,a;
	printf("Enter the number :");
	scanf("%d%d",&num1,&num2);
	a=GCD(num1,num2);
	printf("GCD of %d and %d is: %d\n", num1,num2,a);
}
