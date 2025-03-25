#include <stdio.h>

int main() {
    int i = 0;  // Initialize the loop counter

    // First while loop: Print numbers from 0 to 10
    printf("Numbers from 0 to 10:\n");
    while (i <= 10) {
        printf("%d ", i);  // Print the current value of i
        i++;  // Increment the loop counter
    }

    printf("\n");  // Move to the next line for better formatting

    i = 10;  // Reset the loop counter to 10

    // Second while loop: Print numbers from 10 to 0
    printf("\nNumbers from 10 to 0:\n");
	while (i >= 0) {
        printf("%d ", i);  // Print the current value of i
        i--;  // Decrement the loop counter
    }

    return 0;  // Indicate successful program execution
}
