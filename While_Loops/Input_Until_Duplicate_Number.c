#include <stdio.h>

int main() {
    int userInput;          // Variable to store user input
    int previousNumbers[100]; // Array to store previous entered numbers
    int hasDuplicate = 0;   // Flag to track if a duplicate is found
    int index = 0;          // Index to keep track of the current position in the array

    printf("Input numbers (stop if you input a duplicate):\n");

    // Start a while loop to continue until a duplicate is entered
    while (!hasDuplicate) {
        printf("Input a number: ");
        int readStatus = scanf("%d", &userInput);  // Read the user input

        // Check if the input is a valid integer
        if (readStatus != 1) {
            printf("Invalid input. Please enter a valid integer.\n");

            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }

        // Check if the current input is equal to any of the previous numbers
        for (int i = 0; i < index; i++) {
            if (userInput == previousNumbers[i]) {
                hasDuplicate = 1;  // Set the flag to indicate a duplicate is found
                printf("Duplicate number entered. Program will stop.\n");
                break;  // Exit the loop when a duplicate is found
            }
        }

        previousNumbers[index++] = userInput;  // Store the current input in the array
    }

    return 0;  // Indicate successful program execution
}
