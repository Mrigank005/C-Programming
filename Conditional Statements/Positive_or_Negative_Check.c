#include <stdio.h>   // Include the standard input/output header file.

void main()
{
    int num;   // Declare an integer variable 'num'.

    printf("Input a number : ");   // Prompt the user to input a number.
    scanf("%d", &num);   // Read and store the user's input in 'num'.
    if (num >= 0)   // Check if 'num' is greater than or equal to 0.
        printf("%d is a positive number \n", num);   // Print a message indicating that 'num' is a positive number.
    else
        printf("%d is a negative number \n", num);   // Print a message indicating that 'num' is a negative number.
}
