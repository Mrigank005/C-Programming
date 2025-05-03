#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100]; // Declare a character array to store the string
    int ctr, ch, i; // Declare variables for counting, characters, and iteration

    printf("\n\nReplace lowercase characters by uppercase and vice-versa :\n"); // Display information about the task
    printf("--------------------------------------------------------------\n");

    printf("Input the string : ");
    fgets(str, sizeof str, stdin); // Read a string from the standard input (keyboard)

    i = strlen(str);
    ctr = i; /* shows the number of chars accepted in a sentence */

    printf("\nThe given sentence is   : %s", str); // Display the original string

    printf("After Case changed the string  is: ");
    for (i = 0; i < ctr; i++) {
        // Check if the character is lowercase, then convert to uppercase, else convert to lowercase
        ch = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
        putchar(ch); // Output the modified character
    }
    printf("\n\n");
	
	return 0; // Return 0 to indicate successful execution of the program
}
