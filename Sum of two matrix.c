#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[30][30];
	int i,j;
	int row,col;
	
	printf("Enter the row :\n");
	scanf("%d",&row);
	
	printf("Enter the row :\n");
	scanf("%d",&col);
	
	printf("Enter the 1st matrix :\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the 2nd matrix :\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	printf("1st matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("2nd matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\n");
	printf("sum of two matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
