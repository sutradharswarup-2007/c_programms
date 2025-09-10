#include <stdio.h>
int main()
{
	int num,i,f=1;
		
	printf("Enter the number :");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++) {
	   f = f * i;
    }
	printf("%d fact\n",f);
	return 0;
}
