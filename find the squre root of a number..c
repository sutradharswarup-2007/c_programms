#include <stdio.h>
int main()
{
	int num,i;
	printf("Enter the number :");
	scanf("%d",&num);
	
	double x = num ;
	double y = (x+num/x)/2;
	
	for(i=0;i<10;i++)
	{
		x=y;
		y= (x+num/x)/2;
	}
	printf("Squre root of %d is : %.2lf",num,y);
	return 0;
}
