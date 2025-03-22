#include <stdio.h>   // Include the standard input/output header file.

void main()
{
    int int1, int2;   // Declare two integer variables 'int1' and 'int2'.

    printf("Input the values for Number1 and Number2 : ");   // Prompt the user to input values for Number1 and Number2.
    scanf("%d %d", &int1, &int2);   // Read and store the user's input in 'int1' and 'int2'.
    if (int1 == int2)   // Check if Number1 is equal to Number2.
        printf("%d and %d are equal\n", int1, int2);   // Print a message if Number1 and Number2 are equal.
    else
        printf("%d and %d are not equal\n", int1, int2);   // Print a message if Number1 and Number2 are not equal.
}
