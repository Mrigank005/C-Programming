#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define str_size 100 // Declare the maximum size of the string
#define chr_no 255   // Maximum number of characters to be allowed

int main() {
    char str[str_size];  // Declare a character array to store the string
    int ch_fre[chr_no];  // Declare an array to store the frequency of characters
    int i = 0, max;      // Declare variables for iteration and finding the maximum frequency
    int ascii;           // Variable to hold the ASCII value of a character

    printf("\n\nFind maximum occurring character in a string :\n");  // Display information about the task
    printf("--------------------------------------------------\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);  // Read a string from the standard input (keyboard)

    for (i = 0; i < chr_no; i++) { // Initialize the frequency of all characters to zero
        ch_fre[i] = 0;
    }

    /* Read for frequency of each character */
    i = 0;
    while (str[i] != '\0') { // Loop until the end of the string ('\0' character is encountered)
        ascii = (int)str[i]; // Get the ASCII value of the current character
        ch_fre[ascii] += 1;  // Increment the frequency count for that character
        i++;
    }

    max = 0; // Initialize the index of the character with maximum frequency
    for (i = 0; i < chr_no; i++) {
        if (i != 32) { // Exclude space (' ') character
            if (ch_fre[i] > ch_fre[max]) {
                max = i; // Update the index of the character with maximum frequency
            }
        }
    }

    printf("The Highest frequency of character '%c' appears number of times : %d \n\n", max, ch_fre[max]); // Display the character with maximum frequency and its count
	
	return 0; // Return 0 to indicate successful execution of the program
}
