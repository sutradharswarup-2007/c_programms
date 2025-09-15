#include <stdio.h>

int main()
{
	char arr[50],vowel[11]="AEIOUaeiou";
	int i,j;
	
	printf("Enter the string : ");
	fgets(arr,sizeof(arr),stdin);
	
	for(i=0;arr[i] != '\0';i++)
	{
		for(j=0;vowel[j]!='\0';j++)
		{
			if(arr[i]==vowel[j])
			{
				arr[i]='*';
				break;
			}		
		}
	}
	printf("Modified string is : %s",arr);
    return 0;
}
