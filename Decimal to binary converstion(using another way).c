#include <stdio.h>
#include <string.h>

char* decimal_to_binary(int num)
{
    static char bin[33];  // static so the array persists after return
    int i = 0,j;

    if (num == 0) 
	{
        strcpy(bin, "0");
        return bin;
    }

    while (num > 0)
    {
        bin[i] = (num % 2) + '0';
        num = num / 2;
        i++;
    }
    bin[i] = '\0';

    // reverse the string
    for (j = 0; j < i / 2; j++)
    {
        char temp = bin[j];
        bin[j] = bin[i - j - 1];
        bin[i - j - 1] = temp;
    }

    return bin;  // return pointer to binary string
}

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    char *binary = decimal_to_binary(num);
    // now we can print or use it elsewhere
    printf("Binary: %s\n", binary);
    return 0;
}

