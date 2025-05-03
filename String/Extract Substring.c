#include <stdio.h>

int main() {
    char str[100], sstr[100]; // Declare two character arrays to store the main string and substring
    int pos, l, c = 0; // Declare variables for position, length, and a counter

    printf("\n\nExtract a substring from a given string:\n"); // Display information about the task
    printf("--------------------------------------------\n");

    printf("Input the string : ");
    fgets(str, sizeof str, stdin); // Read a string from the standard input (keyboard)

    printf("Input the position to start extraction :");
    scanf("%d", &pos); // Read the starting position for substring extraction

    printf("Input the length of substring :");
    scanf("%d", &l); // Read the length of the substring

    // Extracting the substring
    while (c < l) {
        sstr[c] = str[pos + c - 1]; // Copy characters from the specified position into the substring
        c++;
    }
    sstr[c] = '\0'; // Add null terminator to mark the end of the substring

    printf("The substring retrieved from the string is : \" %s\" \n\n", sstr); // Display the extracted substring
	
	return 0; // Return 0 to indicate successful execution of the program
}
