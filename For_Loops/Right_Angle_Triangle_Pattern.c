#include <stdio.h>  // Include the standard input/output header file.

void main() {
    int i, j, rows, k = 1;  // Declare variables 'i' and 'j' for loop counters, 'rows' for user input, 'k' for incrementing numbers.

    printf("Input number of rows : ");  // Print a message to prompt user input.
    scanf("%d", &rows);  // Read the value of 'rows' from the user.

    for (i = 1; i <= rows; i++) {  // Start a loop to generate rows.
        for (j = 1; j <= i; j++)  // Nested loop to print numbers based on the current row.
            printf("%d ", k++);  // Print the value of 'k' and increment it.

        printf("\n");  // Move to the next line for the next row.
    }
}
