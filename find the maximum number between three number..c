#include <stdio.h>
#include <stdlib.h>
int main()
{
	int fno,cno,sno,*ptr1=&fno,*ptr2=&cno,*ptr3=&sno;
	printf("Enter first number :");
	scanf("%d",&fno);
	printf("Enter seceond number :");
	scanf("%d",&cno);
	printf("Enter third number :");
	scanf("%d",&sno);
	if((*ptr1 > *ptr2)&&(*ptr1 > *ptr3))
	{
		printf("Maximum number is : %d",*ptr1);
	}
	else if((*ptr2 > *ptr1)&&(*ptr2 > *ptr3))
	{
		printf("Maximum number is : %d",*ptr2);
	}
	else
	{
		printf("Maximum number is : %d",*ptr3);
	}
}
