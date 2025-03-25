#include <stdio.h>

int main() {
    int num, sum = 0;  // Declare variables to store the entered number and the sum

    // Prompt the user to input integers until they enter 0
    do {
        printf("Input an integer (enter 0 to stop): ");
        scanf("%d", &num);  // Read the entered number

        if (num > 0) {
            sum += num;  // Add the positive number to the sum
        } else if (num < 0) {
            printf("Negative integers are not considered. Ignored.\n");
        }

    } while (num != 0);  // Continue the loop until the user enters 0

    // Print the sum of positive integers
    printf("Sum of positive integers: %d\n", sum);

    return 0;  // Indicate successful program execution
}
