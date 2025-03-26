#include <stdio.h> // Include the standard input/output header file.

void main()
{
    int i, j, n, p, q; // Declare variables to store input and control loop indices.

    printf("Input number of rows : "); // Prompt the user for input.
    scanf("%d", &n); // Read the value of 'n' from the user.

    for (i = 1; i <= n; i++) // Loop for the number of rows.
    {
        if (i % 2 == 0) // Check if 'i' is even.
        {
            p = 1;
            q = 0;
        }
        else // If 'i' is odd.
        {
            p = 0;
            q = 1;
        }

        for (j = 1; j <= i; j++) // Loop for each element in the row.
        {
            if (j % 2 == 0) // Check if 'j' is even.
                printf("%d", p); // Print 'p' if 'j' is even.
            else
                printf("%d", q); // Print 'q' if 'j' is odd.
        }

        printf("\n"); // Move to the next line after printing a row.
    }
}
