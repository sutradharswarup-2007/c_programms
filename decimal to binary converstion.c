#include <stdio.h>
int main()
{
	int num;
	char arr[10];
	int i,j=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	while(num>0)
	{
	arr[i]= num % 2;
	num = num /2;
	i++;
    }
    for(j=i-1;j>=0;j--)
    {
      printf("%d",arr[j]);
    }
	return 0;
}
