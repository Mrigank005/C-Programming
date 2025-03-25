#include <stdio.h> // Include the standard input-output library for functions like printf.

int main() {  // Start the main function.
    int number;  // Declare an integer variable 'number' to store the user input.

    // Prompt the user to enter a positive integer.
    printf("Input a positive integer: ");
    scanf("%d", &number);  // Read the user input and store it in the variable 'number'.

    // Check if the entered number is positive.
    if (number <= 0) {
        printf("Error: Please enter a positive integer.\n");  // Print an error message.
        return 1;  // Exit the program with an error code.
    }

    int i = 1;  // Initialize a loop counter variable 'i' to 1.

    // Start a while loop to print the multiplication table up to 10.
    while (i <= 10) {
        // Print the multiplication table entry (number * i).
        printf("%d x %d = %d\n", number, i, number * i);
        
        i++;  // Increment the loop counter for the next iteration.
    }

    return 0;  // Indicate successful program execution.
}
