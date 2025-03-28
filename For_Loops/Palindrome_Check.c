#include <stdio.h> // Include the standard input/output header file.

void main(){
    int num, r, sum = 0, t; // Declare variables for the original number, remainder, reversed number, and temporary variable.

    printf("Input a number: "); // Prompt the user to input a number.
    scanf("%d", &num); // Read the input from the user.

    for(t = num; num != 0; num = num / 10){ // Loop to reverse the digits of the number.
         r = num % 10; // Extract the last digit (remainder when divided by 10).
         sum = sum * 10 + r; // Build the reversed number by adding the extracted digit.
    }

    if(t == sum) // Check if the original number and the reversed number are equal.
         printf("%d is a palindrome number.\n", t); // Print a message if it is a palindrome.
    else
         printf("%d is not a palindrome number.\n", t); // Print a message if it is not a palindrome.
}
