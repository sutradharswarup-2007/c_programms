#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n;
	float *element,max;
	
	printf("Enter the number of element :");
	scanf("%d",&n);
	
	element = (float *)calloc(n,sizeof(float));
	
	if(element==NULL)
	{
	   printf("NO Memory is Allocated.");
	   return 1;
	}

	
	for(i=0;i<n;i++)
	{
		printf("Number %d",i+1);
		scanf("%f",element+i);
	}
	max=*element;
	for(i=1;i<n;i++)
	{
		if(max<element[i])
		{
			(max=element[i]);
		}
	}
	printf("The Largest element is : %.2f /n/n",max);
	return 0;
}
