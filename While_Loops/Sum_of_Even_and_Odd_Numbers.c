#include <stdio.h>

int main() {
    int i = 1;  // Initialize loop control variable to 1
    int sumEven = 0;  // Initialize sum of even numbers
    int sumOdd = 0;   // Initialize sum of odd numbers

    // Calculate the sum of even and odd numbers from 1 to 50
    do {
        // Check if the current number is even
        if (i % 2 == 0) {
            sumEven += i;  // Add even number to the sumEven
        } else {
            sumOdd += i;   // Add odd number to the sumOdd
        }

        i++;  // Increment i for the next iteration

    } while (i <= 50);  // Continue the loop as long as i is less than or equal to 50

    // Print the sum of even and odd numbers
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;  // Indicate successful program execution
}
