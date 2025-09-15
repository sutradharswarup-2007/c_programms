#include <stdio.h>
#include <string.h>
int main()
{
	char arr[20],brr[20];
	int i,j=0,k=0;
	
	printf("Enter the string : ");
	fgets(arr,sizeof(arr),stdin);
	
	if(strlen(arr)>20)
	{
		printf("Maximum allowed size is 20");
		return 1;
	}
	
	for(i=0;arr[i]!='\0';i++)
	{
		k++;
	}
	
	for(i=0;i<k;i++)
	{
		if((arr[i]>='A'&&arr[i]<='Z')||(arr[i]>='a'&&arr[i]<='z'))
		{
			brr[j]=arr[i];
			j++;
		}
		brr[j] = '\0';
	}
	
	printf("After remove all character except Allphabets :%s",brr);
	return 0;
}
