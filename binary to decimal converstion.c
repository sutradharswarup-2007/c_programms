#include <stdio.h>
#include <math.h>
int main()
{
	int num1,num2,d,sum=0,c=0;
	printf("Enter the first number : ");
	scanf("%d",&num1);
    num2=num1;
	while(num1>0)
	{
		num1 = num1 / 10;
		c++;
	}
	while(num2>0)
	{
		num2= num2 / 10;
		d = num2 % 10;
		sum= sum + d*pow(2,c-1);
		c--;
	}
	printf("%d",sum);
	return 0;
}
