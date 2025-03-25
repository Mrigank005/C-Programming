#include <stdio.h>

int main() {
    int num, sum = 0;  // Declare variables to store the entered number and the sum

    // Prompt the user to enter numbers until they input a negative number
    do {
        printf("Input a number (input a negative number to stop): ");
        scanf("%d", &num);  // Read the entered number

        if (num >= 0) {
            sum += num;  // Add the number to the sum if it's non-negative
        }

    } while (num >= 0);  // Continue the loop until the user enters a negative number

    // Print the sum of all entered numbers
    printf("Sum of entered numbers: %d\n", sum);

    return 0;  // Indicate successful program execution
}
