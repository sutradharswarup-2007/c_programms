#include <stdio.h>
#include <string.h>
void check(char str[], int l)
{
    int  i,j=0,t=0,k=0;
    char new_string[20];
    for (i = 0; i <=l; i++) {
        t=0;
        for (j = 0; j <=k; j++) {
            if (str[i] == new_string[j]) {
                t=1;
                break;
            }
        }
        if(t==0)
        {
       
  new_string[k]=str[i];
        k++;
    }
}
   
   printf("%s",new_string);
}

int main(){
char a[10];
printf("Enter the word: ");
scanf("%[^\n]",&a);

check(a,strlen(a));

}