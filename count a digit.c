#include <stdio.h>
int main()
{
	int num,c=0;
	printf("Enter the number :");
	scanf("%d",&num);
	while(num>0)
	{
	   c++;
	   num=num/10;	
	}
	printf("count :%d\n ",c);
	return 0;
}
