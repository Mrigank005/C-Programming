 // C program to compare the two strings without using strcmp() function
#include <stdio.h>
#define str_size 100 // Declare the maximum size of the string

// Function to compare two strings
int test(char* s1, char* s2) {
    int flag = 0; // Initialize a flag variable to indicate string equality or inequality

    // Loop to compare characters in the strings until null terminator '\0' is found in both strings
    while (*s1 != '\0' || *s2 != '\0') {
        if (*s1 == *s2) { // Check if the characters in both strings are equal
            s1++; // Move to the next character in the first string
            s2++; // Move to the next character in the second string
        } else if ((*s1 == '\0' && *s2 != '\0') || (*s1 != '\0' && *s2 == '\0') || *s1 != *s2) {
            // Check for cases where one string ends before the other or characters at the same index are not equal
            flag = 1; // Set the flag to indicate inequality
            break; // Exit the loop as inequality is found
        }
    }
    return flag; // Return the flag indicating string equality (0) or inequality (1)
}

// Main function
int main(void) {
    char str1[str_size], str2[str_size]; // Declare character arrays for the two strings
    int flg = 0; // Initialize a flag variable

    printf("\nInput the 1st string : ");
    fgets(str1, sizeof str1, stdin); // Read the first string from the standard input (keyboard)
    printf("Input the 2nd string : ");
    fgets(str2, sizeof str2, stdin); // Read the second string from the standard input (keyboard)

    printf("\nString1: %s", str1); // Display the first string
    printf("String2: %s", str2); // Display the second string

    flg = test(str1, str2); // Call the function to compare the strings

    // Display the comparison result based on the flag value
    if (flg == 0) {
        printf("\nStrings are equal.\n");
    } else if (flg == 1) {
        printf("\nStrings are not equal.");
    }

    return 0; // Return 0 to indicate successful program execution
}
