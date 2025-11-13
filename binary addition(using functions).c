#include <stdio.h>
#include <math.h>
int binary_to_decimal(int num)
{
	int d, i = 0, sum = 0;

    while (num > 0)
    {
        d = num % 10;           // get last digit
        sum = sum + d * pow(2, i); // multiply by 2^i
        i++;                    // move to next bit position
        num = num / 10;         // remove last digit
    }

    return sum;
}
void decimal_to_binary(int num)
{
   int arr[20];
   int i,j=0;
   while(num > 0)
   {
     arr[i]=num % 2;
     num = num / 2;
     i++;
   }
   for(j=i-1;j>=0;j--)
   {
   	  printf("%d",arr[j]);
   }
}
int main()
{
	int num1,num2;
	int sum=0,a,b;
	printf("Enter the first binary number :");
	scanf("%d",&num1);
	printf("Enter the second binary number :");
	scanf("%d",&num2);
	a=binary_to_decimal( num1);
	b=binary_to_decimal( num2);
	sum = a+b;
	printf("%d",sum);
	printf("\n");
	decimal_to_binary(sum);
	return 0;
	
}
