#include <stdio.h>
#include <string.h>

int main() {
    char username[20];  // Array to store the user input for the username

    // Start a while loop to keep asking for a valid username
    while (1) {
        // Prompt the user to input a username
        printf("Input a username (at least 8 characters): ");
        scanf("%s", username);  // Read the user input and store it in the array

        // Check if the entered username is at least 8 characters long
        if (strlen(username) >= 8) {
            break;  // Exit the loop if the username is valid
        } else {
            // Print an error message if the username is too short
            printf("Error: Username must be at least 8 characters long.\n");
        }

        // Clear the input buffer to handle any remaining characters
        while (getchar() != '\n');
    }

    // Print a message indicating a valid username was entered
    printf("Valid username entered: %s\n", username);

    return 0;  // Indicate successful program execution
}
