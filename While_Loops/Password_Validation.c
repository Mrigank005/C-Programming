#include <stdio.h>
#include <string.h>

int main() {
    char correctPassword[] = "pass$123";  // Set the correct password
    char enteredPassword[20];  // Variable to store the user-entered password

    // Use a do-while loop to repeatedly ask for the password
    do {
        // Prompt the user to enter the password
        printf("Input the password: ");
        scanf("%s", enteredPassword);

        // Check if the entered password is correct
        if (strcmp(enteredPassword, correctPassword) == 0) {
            printf("Correct password! Access granted.\n");
            break;  // Exit the loop if the password is correct
        } else {
            printf("Incorrect password. Try again.\n");
        }

    } while (1);  // Continue the loop indefinitely until the correct password is entered

    return 0;  // Indicate successful program execution
}
