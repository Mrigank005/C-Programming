#include <stdio.h>  // Include the standard input/output header file.

void main() {
    int i, n, sum = 0;  // Declare variables 'i' for loop counter, 'n' for user input, and 'sum' to store the sum.

    printf("Input number of terms : ");  // Print a message to prompt user input.
    scanf("%d", &n);  // Read the value of 'n' from the user.
    printf("\nThe odd numbers are :");  // Print a message indicating that odd numbers will be displayed.

    for (i = 1; i <= n; i++) {  // Start a loop to generate odd numbers based on user input.
        printf("%d ", 2 * i - 1);  // Print the odd number.
        sum += 2 * i - 1;  // Add the odd number to the running sum.
    }

    printf("\nThe Sum of odd Natural Number upto %d terms : %d \n", n, sum);  // Print the sum of odd numbers.

}
