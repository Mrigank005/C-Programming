#include <stdio.h> // Include the standard input/output header file.

void main()
{
   int prv=0, pre=1, trm, i, n; // Declare variables for previous, current, and next terms, as well as loop counters.

   printf("Input number of terms to display : "); // Prompt the user to input the number of terms.
   scanf("%d", &n); // Read the input from the user.

   printf("Here is the Fibonacci series up to %d terms : \n", n); // Print a message indicating the number of terms.

   printf("% 5d % 5d", prv, pre); // Print the first two terms.

   for(i=3; i<=n; i++) // Loop to generate the Fibonacci series starting from the third term.
   {
     trm = prv + pre; // Calculate the next term.
     printf("% 5d", trm); // Print the next term.
     prv = pre; // Update the previous term.
     pre = trm; // Update the current term.
   }

   printf("\n"); // Move to the next line after printing the series.
}
