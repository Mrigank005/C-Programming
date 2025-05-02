#include <stdio.h>

int main() {
    // Declaration of variables
    char str1[50];      // Original string
    char revstr[50];    // Reversed string
    char *stptr = str1; // Pointer to the original string
    char *rvptr = revstr; // Pointer to the reversed string
    int i = -1; // Counter initialized with -1

    // Displaying the purpose of the program
    printf("\n\n Pointer : Print a string in reverse order :\n");
    printf("------------------------------------------------\n");

    printf(" Input a string : ");
    scanf("%s", str1); // Taking input of a string

    // Loop to find the length of the string by moving the pointer to the end
    while (*stptr) {
        stptr++; // Moving the pointer to the end of the string
        i++;     // Counting characters
    }

    // Loop to reverse the string by moving pointers and reversing characters
    while (i >= 0) {
        stptr--;             // Moving the pointer back to the last character of the original string
        *rvptr = *stptr;     // Assigning the character to the reversed string
        rvptr++;             // Moving the pointer to the next position in the reversed string
        --i;                 // Decrementing the counter
    }

    *rvptr = '\0'; // Adding null character to mark the end of the reversed string

    // Printing the reversed string
    printf(" Reverse of the string is : %s\n\n", revstr);

    return 0;
}
