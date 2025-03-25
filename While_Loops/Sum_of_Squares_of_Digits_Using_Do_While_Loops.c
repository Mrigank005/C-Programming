#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Prompt the user to enter a positive integer
    printf("Input a positive integer: ");
    scanf("%d", &num);

    // Check if the entered number is positive
    if (num <= 0) {
        printf("Please input a positive integer.\n");
        return 1; // Return an error code
    }

    // Calculate the sum of the squares of each digit
    do {
        digit = num % 10;  // Extract the last digit
        sum += digit * digit;  // Add the square of the digit to the sum
        num /= 10;  // Remove the last digit

    } while (num != 0);  // Continue the loop until there are no more digits

    // Print the sum of the squares of each digit
    printf("Sum of the squares of each digit: %d\n", sum);

    return 0; // Indicate successful program execution
}
