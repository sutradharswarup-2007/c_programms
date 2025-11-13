#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

char* decimal_to_binary(int num)
{
    static char bin[33];
    int i = 0;

    if (num == 0) 
	{
        strcpy(bin, "0");
        return bin;
    }

    while (num > 0)
    {
        bin[i++] = (num % 2) + '0';
        num = num / 2;
    }
    bin[i] = '\0';

    strrev(bin);  // reverses the string in one call

    return bin;
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


