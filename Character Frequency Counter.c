#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];         // Increased size to handle longer input
    int frr[256] = {0};    // Frequency array for all ASCII characters
    int i;

    printf("Enter the string: ");
    fgets(arr, sizeof(arr), stdin);
    arr[strcspn(arr, "\n")] = '\0';  // Remove trailing newline

    // Count frequencies
    for (i = 0; arr[i] != '\0'; i++) {
        frr[(unsigned char)arr[i]]++;  // Use full ASCII range
    }

    // Print frequencies (only once per unique character)
    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (frr[i] > 0) {
            printf("Character '%c' occurs %d times\n", i, frr[i]);
        }
    }

    return 0;
}

