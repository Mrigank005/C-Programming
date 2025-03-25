#include <stdio.h>

int main() {
    int num;  // Declare a variable to store the input number
    int digitCount = 0;  // Initialize the count of digits

    // Prompt the user to enter an integer
    printf("Input an integer: ");
    scanf("%d", &num);

    // Take the absolute value of the entered number
    num = (num < 0) ? -num : num;

    // Handle the special case when the number is 0
    if (num == 0) {
        digitCount = 1;
    } else {
        // Count the number of digits using a do-while loop
        do {
            digitCount++;
            num /= 10;
        } while (num != 0);
    }

    // Print the count of digits
    printf("Number of digits: %d\n", digitCount);

    return 0;  // Indicate successful program execution
}
