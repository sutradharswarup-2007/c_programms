#include <stdio.h>
int main()
{
	int arr[10],n,i;
	int search_key=0;
	int flag=0;
	int index=-1;
	
	printf("Enter the number of term :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the searching numbers :");
	scanf("%d",&search_key);
	
	for(i=0;i<n;i++)
	{
		if (arr[i]==search_key)
		{
			flag = 1;
			index= i;
			break;
		}
	}
	if (flag == 1)
      printf("Element %d found at index %d\n",search_key,index);
    else
	  printf("Element %d not found in the arrey\n",search_key);
	return 0;    
}
