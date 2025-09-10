#include <stdio.h>
int main()
{
	int num,digit,sum;
	printf("Enter the number :");
	scanf("%d",&num);
	while(num>0)
	{
	   digit=num%10;
	   sum=sum+digit;
	   num=num/10;	
	}
	printf("sum of digit :%d\n ",sum);
	return 0;
}
	
