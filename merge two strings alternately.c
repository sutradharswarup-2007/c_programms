#include <stdio.h>
#include<string.h>
int main()
{
	char a[10]="abc123",b[10]="xyz",c[15];
	int i=0,j=0,k=0;
	
	while(i<strlen(a) || j<strlen(b))
	{
        if(i<strlen(a))
		{
		   c[k++]=a[i++];
		}
		if(j<strlen(b))
		{
		   c[k++]=b[j++];
		}	
	}		 	
	
	printf("%s",c);
	return 0;
}
