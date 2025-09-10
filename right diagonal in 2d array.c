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
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Right diagonal =\n");
	
	for(i=0;i<3;i++)
	{
		printf("%d ,%d ",i,arr[i][i]);
	}
	return 0;
}
