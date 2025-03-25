#include <stdio.h>

 int main() {
    int number;  // Variable to store the user input
    int sum = 0;  // Variable to store the sum of positive integers

    printf("Input integers (enter 0 to stop):\n");

    // Start a while loop to continue until the user enters 0
    while (1) {
        printf("Input a number: ");
        scanf("%d", &number);  // Read the user input

        if (number == 0) {
            break;  // Exit the loop if the user enters 0
        }

        if (number > 0) {
            sum += number;  // Add positive numbers to the sum
        }
    }

    // Print the sum of positive integers
    printf("Sum of positive integers: %d\n", sum);

    return 0;  // Indicate successful program execution
}
