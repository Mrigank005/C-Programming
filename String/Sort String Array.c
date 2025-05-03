#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch; // Declare character array and a temporary variable 'ch'
    int i, j, l; // Declare variables for iteration and string length

    printf("\n\nSort a string array in ascending order :\n"); // Display information about the task
    printf("--------------------------------------------\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin); // Read a string from the standard input (keyboard)

    l = strlen(str); // Calculate the length of the string

    /* sorting process using Bubble Sort algorithm */
    for (i = 1; i < l; i++) {
        for (j = 0; j < l - i; j++) {
            if (str[j] > str[j + 1]) { // Check if the current character is greater than the next one
                ch = str[j]; // Swap characters if they are out of order
                str[j] = str[j + 1];
                str[j + 1] = ch;
            }
        }
    }

    printf("After sorting the string appears like : \n"); // Display the sorted string
    printf("%s\n\n", str);
	
	return 0; // Return 0 to indicate successful execution of the program
}
  
