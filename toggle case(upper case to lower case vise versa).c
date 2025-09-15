#include <string.h>
#include <stdio.h>

int main()
{
	char arr[20], brr[20], crr[40];
	int i, j, k = 0;

	printf("Enter the 1st string :");
	fgets(arr, sizeof(arr), stdin);
	arr[strcspn(arr, "\n")] = '\0';  // remove newline

	
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
          crr[k] = arr[i]+32;
        } 
   	    else
	    {
          crr[k] = arr[i]-32; // If not an uppercase letter, keep it as is
        }
		k++;
	}
   
	
	crr[k] = '\0';  // null-terminate final string


	printf("After concatenation : %s\n", crr);
	return 0;
}

