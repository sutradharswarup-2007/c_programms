#include <stdio.h>
int main()
{
	int num,i,c=0;
	printf("Enter the number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	if(num %i==0)
	c++;
}
 if (c == 2)
  printf("This is prime number");
else
  printf("This is not a prime number");
	   return 0;
}
