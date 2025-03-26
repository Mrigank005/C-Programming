#include <stdio.h>  // Include the standard input/output header file.

void main()
{
    int i, n;      // Declare variables to store input and loop control.
    float s = 0.0; // Initialize 's' to 0.0 to accumulate the sum.

    // Prompt the user to input the number of terms.
    printf("Input the number of terms : ");
    scanf("%d", &n);  // Read the value of 'n' from the user.

    printf("\n\n");  // Print extra new lines for formatting.

    // Loop to calculate the sum of the series.
    for (i = 1; i <= n; i++)
    {
        if (i < n)
        {
            printf("1/%d + ", i);      // Print the term with a plus sign.
            s += 1 / (float)i;       // Calculate and add the term to the sum.
        }
        if (i == n)
        {
            printf("1/%d ", i);      // Print the last term without a plus sign.
            s += 1 / (float)i;       // Calculate and add the term to the sum.
        }
    }

    // Print the final result.
    printf("\nSum of Series upto %d terms : %f \n", n, s);
}
