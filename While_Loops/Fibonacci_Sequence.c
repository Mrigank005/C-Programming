#include <stdio.h>

int main() {
    int count = 10;          // Number of Fibonacci numbers to generate
    int firstTerm = 0, secondTerm = 1;  // Initialize the first two terms of the sequence

    printf("First %d Fibonacci numbers:\n", count);

    // Start a while loop to generate Fibonacci numbers
    while (count > 0) {
        printf("%d, ", firstTerm);  // Print the current Fibonacci number
        int nextTerm = firstTerm + secondTerm;  // Calculate the next Fibonacci number
        firstTerm = secondTerm;  // Update the first term with the value of the second term
        secondTerm = nextTerm;   // Update the second term with the calculated next term
        count--;  // Decrease the count for the next iteration
    }

    return 0;  // Indicate successful program execution
}
