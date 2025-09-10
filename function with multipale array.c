#include <stdio.h>

// Modified function: also returns count through pointer
int* func(int a[], int n, int* count) 
{
    static int arr[10];
    int j = 0,i;
    for(i = 0; i < n; i++)
    {
        if(a[i] % 5 == 0)
        {
            arr[j] = a[i];
            j++;
        }
    }
    *count = j; // return count via pointer
    return arr;
}

int main() 
{
    int a[] = {2, 4, 5, 10, 20, 24, 18, 160};
    int n = sizeof(a) / sizeof(a[0]);

    int count = 0,i;
    int* arr = func(a, n, &count);

    for(i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

