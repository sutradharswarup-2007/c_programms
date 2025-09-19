#include <string.h>
#include <stdio.h>

int main()
{
	char arr[20], brr[20], crr[40];
	int i, j, k = 0;

	printf("Enter the 1st string :");
	fgets(arr, sizeof(arr), stdin);
	arr[strcspn(arr, "\n")] = '\0';  // remove newline

	printf("Enter the 2nd string :");
	fgets(brr, sizeof(brr), stdin);
	brr[strcspn(brr, "\n")] = '\0';  // remove newline

	for (i = 0; arr[i] != '\0'; i++)
	{
		crr[k] = arr[i];
		k++;
	}
	
	crr[k++]=' ';

	for (j = 0; brr[j] != '\0'; j++)
	{
		crr[k++] = brr[j];
	}

	crr[k] = '\0';  // null-terminate final string

	printf("%d\n", n);  // print final length
	printf("After concatenation : %s\n", crr);
	return 0;
}

