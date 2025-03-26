#include <stdio.h>  // Include the standard input/output header file.

void main() {
    int j, n;  // Declare variables 'j' for loop counter and 'n' for user input.

    printf("Input the number (Table to be calculated) : ");  // Print a message to prompt user input.
    scanf("%d", &n);  // Read the value of 'n' from the user.
    printf("\n");  // Print a newline for formatting.

    for (j = 1; j <= 10; j++) {  // Start a for loop to calculate the table up to 10.
        printf("%d X %d = %d \n", n, j, n * j);  // Print the multiplication expression and result.
    }
}
