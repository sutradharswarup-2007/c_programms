#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
vowel(char a[])
{
	int i,x=0;
	for(i=0;i<strlen(a);i++)
	{
	   if((a[i]=='A')||
	      (a[i]=='E')||
		  (a[i]=='I')||
		  (a[i]=='O')||
		  (a[i]=='U')||
		  (a[i]=='a')||
		  (a[i]=='e')||
		  (a[i]=='i')||
		  (a[i]=='o')||
		  (a[i]=='u'))
	   {
	      x++;
	   }
    }
	return x;
}
int main() 
{

    char *s, *st;
    int i,l,k = 0;
    s = malloc(1024 * sizeof(char));
    st = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    st = realloc(st, strlen(st) + 1);
    int len=strlen(s);
    s[len] = ' ';         // add the character
    s[len + 1] = '\0';
    
    //Write your logic to print the tokens of the sentence here.

    for (i = 0; i < strlen(s); i++) 
	{
        if (s[i] == ' ') 
		{
            st[k] = '\0';  // terminate the current word
            l=vowel(st);
            printf("%s length=%d\n", st,l);  // print the word
            k = 0;  // reset index
        } else 
		{
            st[k++] = s[i];
        }
    }

    free(s);
    free(st);

    return 0;
}

