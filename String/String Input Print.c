#include <stdio.h>
#include <stdlib.h>

// Main function
int main() {
    char str[50]; // Declaring a character array to store the input string
	
    printf("\n\nAccept a string from keyboard :\n"); // Prompt to accept a string from the keyboard
    printf("-----------------------------------\n"); 	
    printf("Input the string : ");

    // Read a string from the standard input (keyboard) using fgets()
    fgets(str, sizeof str, stdin);

    // Display the string entered by the user
    printf("The string you entered is : %s\n", str);
	
	return 0; // Return 0 to indicate successful execution of the program
}

