#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum;  // Declare variables for the number, reversed number, and original number

    printf("Input a number: ");
    scanf("%d", &num);  // Read the input number from the user
    originalNum = num;  // Store the original number for comparison later

    // Start a while loop to reverse the digits of the number
    while (num != 0) {
        int remainder = num % 10;  // Extract the last digit
        reversedNum = reversedNum * 10 + remainder;  // Build the reversed number
        num /= 10;  // Remove the last digit from the original number
    }

    // Check if the reversed number is equal to the original number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;  // Indicate successful program execution
}
