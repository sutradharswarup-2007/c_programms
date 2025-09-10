#include <stdio.h>
int reverse(int n)
{
	int i,a,r;
	while(n>0)
	{
		a=n%10;
		r=r*10+a;
		n=n/10;
	}
	return r;
}
int main()
{
    int a , b , i, n;
	printf("Enter the range :");
	scanf("%d %d",&a,&b);
	for (i=a;i<=b;i++)
	{
		n=reverse(i);
		printf("reverse : %d\n",n);
	}
}
