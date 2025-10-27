#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    char arr[7][10] = {"Geek", "Geeks", "Geekfor", "appel", "orange", "appel", "orange"};
    char brr[7][10];
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, k = 0;
    bool flag;
    int c = 0;

    for (i = 0; i < n; i++)
    {
        flag = true;
        for (j = 0; j < c; j++)
        {
            if (strcmp(arr[i], brr[j]) == 0) // ? fixed typo: strcam ? strcmp
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            strcpy(brr[k], arr[i]); // ? correct way to copy string
            k++;
            c++;
        }
    }

    printf("Unique strings:\n");
    for (i = 0; i < c; i++)
    {
        printf("%s\n", brr[i]);
    }

    return 0;
}

