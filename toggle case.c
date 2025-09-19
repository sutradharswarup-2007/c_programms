#include <stdio.h>
#include <string.h>
int main()
{
	char arr[10],brr[10];
	int i,j,k=0;
	
	printf("Enter the string :");
	fgets(arr,sizeof(arr),stdin);
	arr[strcspn(arr, "\n")] = '\0'; 
	
	if(strlen(arr)>10)
	{
		printf("Maximum allowed size is 10\n");
		return 1;
	}
	
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]>='A'&&arr[i]<='Z')
		{
			brr[k]=arr[i]+32;
			k++;
		}
		else
		{
			brr[k]=arr[i]-32;
			k++;
		}
		
	}
	brr[k]='\0';
	printf("%s",brr);
	return 0;
}
