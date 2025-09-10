#include <stdio.h>
int main()
{
	int a[10][10],b[10][10];
	int i,j;
	int k,l;
	int row,col;
	
	printf("Enter the row :");
	scanf("%d",&row);
	
	printf("Enter the col :");
	scanf("%d",&col);
	
	printf("Enter the element :");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			b[i][j]=a[j][i];
		}
	}
    printf("\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
