#include <stdio.h>

int main() {
    int number;        // Variable to store the user input
    long long factorial = 1;  // Variable to store the factorial, initialized to 1

    // Prompt the user to enter a positive integer
    printf("Input a positive integer: ");
    scanf("%d", &number);  // Read the user input

    // Check if the entered number is negative
    if (number < 0) {
        printf("Error: Input enter a non-negative integer.\n");
        return 1;  // Exit the program with an error code
    }

    // Calculate the factorial using a while loop
    while (number > 0) {
        factorial *= number;  // Multiply the current factorial by the current number
        number--;  // Decrement the number for the next iteration
    }

    // Print the calculated factorial
    printf("Factorial: %lld\n", factorial);

    return 0;  // Indicate successful program execution
}
