#include <stdio.h>   // Include the standard input/output header file.

void main()
{
    int num1, num2, num3;   // Declare three integer variables 'num1', 'num2', and 'num3'.

    printf("Input the values of three numbers : ");   // Prompt the user to input three numbers.
    scanf("%d %d %d", &num1, &num2, &num3);   // Read and store the user's input in 'num1', 'num2', and 'num3'.

    printf("1st Number = %d,\t2nd Number = %d,\t3rd Number = %d\n", num1, num2, num3);   // Print the values of 'num1', 'num2', and 'num3'.

    if (num1 > num2)   // Check if 'num1' is greater than 'num2'.
    {
        if (num1 > num3)   // Check if 'num1' is also greater than 'num3'.
        {
            printf("The %d is the greatest among three. \n", num1);   // Print a message indicating that 'num1' is the greatest.
        }
        else
        {
            printf("The %d is the greatest among three. \n", num3);   // Print a message indicating that 'num3' is the greatest.
        }
    }
    else if (num2 > num3)   // If 'num1' is not the greatest, check if 'num2' is greater than 'num3'.
        printf("The %d is the greatest among three \n", num2);   // Print a message indicating that 'num2' is the greatest.
    else
        printf("The %d is the greatest among three \n", num3);   // If none of the above conditions are met, 'num3' must be the greatest.
}
