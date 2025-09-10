#include <stdio.h>
int sod(int n)
{
	while (n>0)
	{
		n = n % 10;
	}
}
int main()
{
	int num;
	int digit,sum=0;
	
	printf("Enter the number :");
	scanf("%d",&num);
	if (num > 99999 && num < 1000000)
	{
	while (num > 0)
	{
		digit = num % 10;
		sum = sum + digit;
		num = num / 10;
	}
    }
	else
	{
	    printf("Not a six digit no \n");
	}
	printf("Sum of digit :%d\n",sum);	
	return 0; 
}
