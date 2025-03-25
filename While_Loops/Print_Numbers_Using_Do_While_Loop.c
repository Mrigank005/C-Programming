#include <stdio.h>

int main() {
    int i = 1;  // Initialize the loop control variable to 1

    // Print numbers from 1 to 10
    printf("Print numbers from 1 to 10:\n");
    do {
        printf("%d ", i);  // Print the current value of i
        i++;  // Increment i for the next iteration
    } while (i <= 10);  // Continue the loop as long as i is less than or equal to 10

    printf("\n");  // Move to the next line for better formatting

    i = 10;  // Reset i to 10 for the second part of the program

    // Print numbers from 10 to 1
    printf("\nPrint numbers from 10 to 1:\n");
    do {
        printf("%d ", i);  // Print the current value of i
        i--;  // Decrement i for the next iteration
    } while (i >= 1);  // Continue the loop as long as i is greater than or equal to 1

    return 0;  // Indicate successful program execution
}
