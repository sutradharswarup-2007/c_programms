#include <stdio.h>
int main()
{
	int arr[10][10];
	int i,j;
	int row,col;
	int max,min;
	
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
	
	max = arr[0][0];
    min = arr[0][0];
    
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
			if(min > arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}
	printf("max = %d\n",max);
	printf("min = %d\n",min);
	return 0;
}
