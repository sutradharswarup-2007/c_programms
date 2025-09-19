#include <stdio.h>
#include <string.h>
int main()
{
	char arr[15],brr[30];
	int i,j,k=0;
	
	printf("Enter the string :\n");
	fgets(arr,sizeof(arr),stdin);
	arr[strcspn(arr, "\n")]='\0';
	
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]=='a'|| arr[i]=='e'||arr[i]=='i'|| arr[i]=='o' || arr[i]=='u')
		{
			printf("%d",arr[i]-'a'+1);
		}
		else if(arr[i]=='A'|| arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
		{
			printf("%d",arr[i]-'A'+1);
		}
		else
		{
	    	printf("%c",arr[i]);
		}	
	}
    return 0;
}
