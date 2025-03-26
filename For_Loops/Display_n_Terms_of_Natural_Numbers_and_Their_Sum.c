#include <stdio.h>  // Include the standard input/output header file.

void main() {
    int i, n, sum = 0;  // Declare variables 'i' for loop counter, 'n' for the number of terms, and 'sum' to store the sum.

    printf("Input Value of terms : ");  // Print a message to prompt user input.
    scanf("%d", &n);  // Read the value of 'n' from the user.

    printf("\nThe first %d natural numbers are:\n", n);  // Print a message to indicate the output.

    for (i = 1; i <= n; i++) {  // Start a for loop to iterate from 1 to 'n'.
        printf("%d ", i);  // Print the current value of 'i'.
        sum += i;  // Add the current value of 'i' to the sum.
    }

    printf("\nThe Sum of natural numbers upto %d terms : %d \n", n, sum);  // Print the sum of natural numbers.
}
