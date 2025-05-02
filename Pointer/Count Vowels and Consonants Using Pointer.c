#include <stdio.h>

int main() {
    char str1[50]; // Array to store the input string
    char *pt; // Pointer to traverse the string
    int ctrV, ctrC; // Variables to count vowels and consonants

    printf("\n\n Pointer : Count the number of vowels and consonants :\n"); 
    printf("----------------------------------------------------------\n");	
    printf(" Input a string: ");
    fgets(str1, sizeof str1, stdin); // Read input string from the user

    // Assign the base address of str1 to the pointer 'pt'
    pt = str1;

    ctrV = ctrC = 0; // Initialize counters for vowels and consonants

    // Loop through the string pointed by 'pt'
    while (*pt != '\0') {
        // Check if the current character is a vowel (both uppercase and lowercase)
        if (*pt == 'A' || *pt == 'E' || *pt == 'I' || *pt == 'O' || *pt == 'U' ||
            *pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u') {
            ctrV++; // Increment vowel counter if the character is a vowel
        } else {
            ctrC++; // Increment consonant counter for other characters
        }
        pt++; // Move the pointer to the next character in the string
    }

    // Display the count of vowels and consonants
    printf(" Number of vowels : %d\n Number of consonants : %d\n", ctrV, ctrC - 1); // Subtracted 1 to remove the count for the newline character

    return 0;
}
