#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Prompt the user to enter a number
    printf("Input a number: ");
    scanf("%d", &num);

    // Store the original number in a separate variable
    int originalNum = num;

    // Reverse the number using a do-while loop
    do {
        // Extract the last digit
        remainder = num % 10;

        // Build the reversed number by appending the extracted digit
        reversedNum = reversedNum * 10 + remainder;

        // Remove the last digit from the original number
        num = num / 10;

    } while (num != 0);

    // Print the original and reversed numbers
    printf("Original Number: %d\n", originalNum);
    printf("Reversed Number: %d\n", reversedNum);

    return 0;  // Indicate successful program execution
}
