#include <stdio.h>
#include <stdlib.h>  // For calloc and free

int main() 
{
    int *arr, *frr;
    int i, n, max = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for 'arr' using calloc
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) 
	{
        printf("Memory allocation failed for arr.\n");
        return 1;
    }

    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
        if (arr[i] > max) 
		{
            max = arr[i];  // Find max value to size 'frr'
        }
    }

    // Allocate memory for 'frr' based on max value from input
    frr = (int *)calloc(max + 1, sizeof(int));
    if (frr == NULL) 
	{
        printf("Memory allocation failed for frr.\n");
        free(arr);  // Clean up before exiting
        return 1;
    }

    // Count frequencies
    for (i = 0; i < n; i++) 
	{
        frr[arr[i]]++;
    }

    // Print frequencies
    printf("Frequency of each element:\n");
    for (i = 0; i <= max; i++) 
	{
        if (frr[i] > 0) {
            printf("%d: %d\n", i, frr[i]);
        }
    }

    // Free the allocated memory
    free(arr);
    free(frr);

    return 0;
}

