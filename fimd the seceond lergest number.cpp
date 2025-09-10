// find the seceond lergest number
#include <stdio.h>
int main() 
{
    int arr[] = {100, 20, 47, 98, 25, 24};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int second = -1; // assuming all numbers are positive

    for (int i = 1; i < n; i++) 
	{
        if (arr[i] > largest) 
		{
            second = largest;
            largest = arr[i];
        } 
		else if (arr[i] > second && arr[i] != largest) 
		{
            second = arr[i];
        }
    }

    if (second != -1)
        printf("Second largest number is: %d\n", second);
    else
       printf("No second largest number found.\n");

    return 0;
}

