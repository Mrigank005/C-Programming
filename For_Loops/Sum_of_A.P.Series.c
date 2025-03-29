#include <stdio.h> // Include the standard input/output header file.
#include <math.h>  // Include the math header file.

void main(){

    int n1, df, n2, i, ln; // Declare variables to store input and results.
    int s1 = 0; // Initialize the sum of the arithmetic progression.

    printf("\n\nFind out the sum of A.P. series :\n "); // Print a message.
    printf("----------------------------------------\n"); // Print a separator.

    printf("Input  the starting number of the A.P. series: "); // Prompt the user for the starting number.
    scanf("%d", &n1); // Read the starting number.

    printf("Input the number of items for the A.P. series: "); // Prompt the user for the number of items in the series.
    scanf("%d", &n2); // Read the number of items.

    printf("Input the common difference of A.P. series: "); // Prompt the user for the common difference.
    scanf("%d", &df); // Read the common difference.

    // Calculate the sum of the arithmetic progression.
    s1 = (n2 * (2 * n1 + (n2 - 1) * df)) / 2;
    ln = n1 + (n2 - 1) * df; // Calculate the last term of the series.

    printf("\nThe Sum of the A.P. series are : \n"); // Print a message.

    // Loop to print the terms of the arithmetic progression.
    for (i = n1; i <= ln; i = i + df) {
         if (i != ln)
             printf("%d + ", i); // Print the term and a plus sign.
         else
             printf("%d = %d \n\n", i, s1); // Print the last term and the total sum.
    }
}
