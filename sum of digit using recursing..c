#include <stdio.h>
int s_o_d(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
	return n%10+s_o_d(n/10);	
	}
}
int main()
{
	int a,b;
	printf("Enter the number : ");
	scanf("%d",&a);
	b = s_o_d(a);
	printf("%d",b);
	return 0;
}
