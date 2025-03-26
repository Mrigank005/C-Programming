#include <stdio.h>  // Include the standard input/output header file.

void main() {
   int i, j, spc, rows, k, t = 1;  // Declare variables 'i' and 'j' for loop counters, 'spc' for spaces, 'rows' for user input, 'k' for loop counter, 't' for incrementing numbers.

   printf("Input number of rows : ");  // Print a message to prompt user input.
   scanf("%d", &rows);  // Read the value of 'rows' from the user.
   spc = rows + 4 - 1;  // Calculate the initial number of spaces.

   for (i = 1; i <= rows; i++) {  // Start a loop to generate rows.
      for (k = spc; k >= 1; k--) {  // Loop to print spaces before the numbers.
         printf(" ");
      }

      for (j = 1; j <= i; j++) {  // Loop to print numbers based on the current row.
         printf("%d ", t++);  // Print the value of 't' and increment it.
      }

      printf("\n");  // Move to the next line for the next row.
      spc--;  // Decrement the number of spaces for the next row.
   }
}
