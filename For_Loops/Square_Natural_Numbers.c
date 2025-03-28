#include <stdio.h> // Include the standard input/output header file.

void main()
{
   int i, n, sum = 0; // Declare variables for loop control and sum calculation.

   printf("Input the number of terms : "); // Prompt the user for input.
   scanf("%d", &n); // Read the value of 'n' from the user.

   printf("\nThe square natural numbers up to %d terms are :", n); // Print a message.

   for(i = 1; i <= n; i++) // Loop to calculate square of natural numbers.
   {
     printf("%d  ", i*i); // Print the square of the current natural number.
     sum += i*i; // Add the square to the running sum.
   }

   printf("\nThe Sum of Square Natural Numbers up to %d terms = %d \n", n, sum); // Print the sum.
}
