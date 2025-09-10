#include <stdio.h>
int main()
{
	int arr[10][10];
	int i,j;
	int row,col;
	
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
	
	for(i=0;i<=row;i++)
	{
	printf("%d ",arr[i][row-i-1]);	
	}
	return 0;
}
