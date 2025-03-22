#include <stdio.h>   // Include the standard input/output header file.

void main()
{
    int num, rem;   // Declare two integer variables 'num1' and 'rem1'.

    printf("Input an integer : ");   // Prompt the user to input an integer.
    scanf("%d", &num);   // Read and store the user's input in 'num1'.
    rem = num % 2;   // Calculate the remainder of 'num1' when divided by 2.
    if (rem == 0)   // Check if the remainder is equal to 0.
        printf("%d is an even integer\n", num);   // Print a message indicating that 'num1' is an even integer.
    else
        printf("%d is an odd integer\n", num);    // Print a message indicating that 'num1' is an odd integer.
}
