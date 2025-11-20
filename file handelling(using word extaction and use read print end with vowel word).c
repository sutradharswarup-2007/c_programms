#include <stdio.h>
#include <string.h>
void cxtraction(char sentence[])
{
	char words[20][50];
	char vowel[11]="AEIOUaeiou";
	int i,j,len=0,w=0,c=0;
	while (sentence[i] != '\0') 
	{
        if (sentence[i] == ' ' || sentence[i] == '\n') 
		{
            if (c > 0) 
			{   
			    words[w][c] = '\0';
                w++;
                c = 0;
            }
        } 
		else
		{
			words[w][c++]=sentence[i];
		}
		i++;
	}
    for (i = 0; i < w; i++)
    {
		for(j=0;j<strlen(vowel);j++)
		{
		   if(words[i][strlen(words[i])-1]==vowel[j])
		   {
			  printf("%s\n", words[i]);
		   }		
	 	}
	}
}
int main()
{
	FILE *fptr;
	char line;
	char sentence[200];
	
	fptr = fopen("C:\\file\\program.txt", "r");
	if (fptr == NULL)
	{
		printf("File not found :");
		return 1;
	}
	printf("Words:\n");
	while (fgets(sentence, sizeof(sentence), fptr) != '\0')
	{
	    cxtraction(sentence);
	}
	
	fclose(fptr);
	return 0;
}
