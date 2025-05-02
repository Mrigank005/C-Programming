#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100]; /* Declares a string of size 100 */
    int l = 0; // Initialize a variable to store the index of the string

    printf("\n\nSeparate the individual characters from a string :\n"); // Display information about the task
    printf("------------------------------------------------------\n");
    printf("Input the string : ");

    // Read a string from the standard input (keyboard) using fgets()
    fgets(str, sizeof str, stdin);

    printf("The characters of the string are : \n");

    // Loop to print each individual character of the string until the null terminator '\0' is encountered
    while (str[l] != '\0') {
        printf("%c  ", str[l]); // Print each character
        l++; // Move to the next character in the string
    }

    printf("\n");
	
	return 0; // Return 0 to indicate successful execution of the program
}
