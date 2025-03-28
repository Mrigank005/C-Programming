#include <stdio.h> // Include the standard input/output header file.

void main()
{
   int i, j, r; // Declare variables for loop control and the number of rows.
   printf("Input number of rows (half of the diamond) :"); // Prompt the user to input the number of rows.
   scanf("%d", &r); // Read the number of rows from the user.

   for(i = 0; i <= r; i++) // Start a loop to print the upper half of the diamond.
   {
     for(j = 1; j <= r - i; j++) // Loop to print spaces before the asterisks.
       printf(" ");
     for(j = 1; j <= 2 * i - 1; j++) // Loop to print asterisks.
       printf("*");
     printf("\n"); // Move to the next line after completing a row.
   }

   for(i = r - 1; i >= 1; i--) // Start a loop to print the lower half of the diamond.
   {
     for(j = 1; j <= r - i; j++) // Loop to print spaces before the asterisks.
       printf(" ");
     for(j = 1; j <= 2 * i - 1; j++) // Loop to print asterisks.
       printf("*");
     printf("\n"); // Move to the next line after completing a row.
   }
}
