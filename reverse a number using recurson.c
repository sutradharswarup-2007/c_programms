#include<stdio.h>
int s=0;
int reverse(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		s=s*10+n%10;
		reverse(n/10);
	}
	return s;
}
int main()
{
	int a,b,c;
	printf("Enter the number :");
	scanf("%d",&a);
	b=reverse(a);
    
	printf("%d",b);
}
