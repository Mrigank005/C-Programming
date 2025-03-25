#include <stdio.h>

int main() {
    int count = 0;  // Variable to store the number of entered values
    double sum = 0.0;  // Variable to store the sum of entered values
    double number;  // Variable to store the user input

    // Prompt the user to enter numbers and calculate the average
    printf("Input numbers to calculate the average (enter a non-numeric value to stop):\n");

    while (1) {
        // Read the user input
        printf("Input a number: ");
        if (scanf("%lf", &number) != 1) {
            // If the input is not a valid number, break out of the loop
            break;
        }

        // Add the entered number to the sum
        sum += number;
        // Increment the count of entered values
        count++;
    }

    // Check if any numbers were entered
    if (count > 0) {
        // Calculate and print the average
        double average = sum / count;
        printf("Average of input numbers: %.2lf\n", average);
    } else {
        // If no numbers were entered, print a message
        printf("No numbers were entered.\n");
    }

    return 0; // Indicate successful program execution
}
