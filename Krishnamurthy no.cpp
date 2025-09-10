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
sum_of_digit(int num)
{
	int digit,sum;
	while(num>0)
	{
	   digit=num%10;
	   sum=sum+fact(digit);
	   num=num/10;	
	}
	return sum;
}
int main()
{
	int b,l;
	printf("Enter the number :");
	scanf("%d",&b);
	l = sum_of_digit(b);
	if (l==b)
	  printf("This is Krishnamurthy no. ");
	else 
	  printf("This is not a Krishnamurthy no.");
}
