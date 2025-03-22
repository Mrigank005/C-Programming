#include <stdio.h>   // Include the standard input/output header file.

void main()
{
    int year;   // Declare an integer variable 'year'.

    printf("Input a year :");   // Prompt the user to input a year.
    scanf("%d", &year);   // Read and store the user's input in 'year'.
    if ((year % 400) == 0)   // Check if 'year' is divisible by 400 with no remainder.
        printf("%d is a leap year.\n", year);   // Print a message indicating that 'year' is a leap year.
    else if ((year % 100) == 0)   // Check if 'year' is divisible by 100 with no remainder.
        printf("%d is not a leap year.\n", year);   // Print a message indicating that 'year' is not a leap year.
    else if ((year % 4) == 0)   // Check if 'year' is divisible by 4 with no remainder.
        printf("%d is a leap year.\n", year);   // Print a message indicating that 'year' is a leap year.
    else
        printf("%d is not a leap year \n", year);   // Print a message indicating that 'year' is not a leap year.
}
