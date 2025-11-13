#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	int d, i = 0, sum = 0;
	printf("Enter the binary number : ");
	scanf("%d",&num1);
    while (num > 0)
    {
        d = num % 10;                 // get last digit
        sum = sum + d * pow(2, i);   // multiply by 2^i
        i++;                        // move to next bit position
        num = num / 10;            // remove last digit
    }
	printf("%d",sum);
	return 0;
}

