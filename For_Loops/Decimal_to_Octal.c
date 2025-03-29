#include <stdio.h> // Include the standard input/output header file.

void main() {
    int n, i, j, ocno = 0, dn; // Declare variables to store input and results.

    printf("\n\nConvert Decimal to Octal:\n "); // Print a message.
    printf("-------------------------\n"); // Print a separator.

    printf("Enter a number to convert : "); // Prompt the user for input.
    scanf("%d", &n); // Read the input decimal number.

    dn = n; // Store the original value of the decimal number.
    i = 1; // Initialize the multiplier for the octal digits.

    for (j = n; j > 0; j = j / 8) {
        ocno = ocno + (j % 8) * i; // Calculate the octal digit and add it to the result.
        i = i * 10; // Update the multiplier for the next octal digit.
        n = n / 8; // Update the quotient for the next iteration.
    }

    printf("\nThe Octal of %d is %d.\n\n", dn, ocno); // Print the result.
}
