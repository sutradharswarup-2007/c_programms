#include <stdio.h>
int main()
{
	int arr[10][10];
	int i,j;
	int row,col;
	int sum1=0,sum2=0;
	
	printf("Enter the row :\n");
	scanf("%d",&row);
	
	printf("Enter the col :\n");
	scanf("%d",&col);
	
	printf("Enter the elements :\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d ",&arr[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("Left Diagonal =\n");
	
	for(i=0;i<row;i++)
	{
		printf("%d ",arr[i][i]);
	}
	
	printf("\n");
	printf("Right Diagonal =\n");
	
	for(i=0;i<row;i++)
	{
	printf("%d ",arr[i][row-i-1]);	
	}
	
	for(i=0;i<row;i++)
	{
		sum1= sum1 + arr[i][i];
		sum2= sum2 + arr[i][row-i-1];
	}
	printf("\n");
	printf("left diagonal sum =%d \n",sum1);
	printf("right diagonal sum=%d \n",sum2);
	return 0;
}
