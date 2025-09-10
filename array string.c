#include <stdio.h>
int main() 
{
    char names[5][5]; // 5 strings, each up to 49 characters + null terminator

    printf("Enter 5 names:\n");
    int i;
    for (i = 0; i < 5; i++) 
	{
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]); // read max 49 characters to avoid overflow
    }

    printf("\nYou entered:\n");
    for (i = 0; i < 5; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}

