#include <stdio.h> // Include the standard input/output header file.

void main()
{
    int no_row,c=1,blk,i,j; // Declare variables for row count, pattern counter, and loop control.

    printf("Input number of rows: "); // Prompt the user to input the number of rows.
    scanf("%d",&no_row); // Read the input from the user.

    for(i=0;i<no_row;i++) // Outer loop for iterating over rows.
    {
        for(blk=1;blk<=no_row-i;blk++) // Inner loop for printing spaces.
            printf("  ");

        for(j=0;j<=i;j++) // Inner loop for generating and printing pattern.
        {
            if (j==0||i==0) // If it's the first column or first row, set c to 1.
                c=1;
            else
               c=c*(i-j+1)/j; // Calculate the next pattern value.
            printf("% 4d",c); // Print the pattern value.
        }

        printf("\n"); // Move to the next row.
    }
}
