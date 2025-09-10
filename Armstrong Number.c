#include <stdio.h>
sum_of_digit(int num)
{
	int digit,sum;
	while(num>0)
	{
	   digit=num%10;
	   sum=sum+digit*digit*digit;
	   num=num/10;	
	}
	return sum;
}
int main()
{
    int a,k;
	printf("number :");
	scanf("%d",&a);
	k = sum_of_digit(a);
	if(k==a)
	 printf("Armstrong  ");
	else 
	 printf("Not  Armstrong  ");	
}	
