#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], i, j, l, m, k; // Declare character arrays and variables for iteration

    printf("\n\nConcatenate Two Strings Manually :\n"); // Display information about the task
    printf("-------------------------------------\n");
	
	printf("Input the first string : ");
    fgets(str1, sizeof str1, stdin); // Read the first string from standard input

	printf("Input the second string : ");
    fgets(str2, sizeof str2, stdin); // Read the second string from standard input

    l = strlen(str1); // Get the length of the first string
    m = strlen(str2); // Get the length of the second string

    for (i = 0; i < l - 1; ++i);  /* value i contains reaches the end of string str1. */  
    str1[i] = ' '; /* Add a space with string str1. */ 
    i++; /* Increase i by 1 for the blank space */ 

    for (j = 0; j < m - 1; ++j, ++i) {
        str1[i] = str2[j]; // Concatenate str2 to str1 after the added space
    }

    k = strlen(str1); // Get the length of the concatenated string

    printf("After concatenation the string is : \n ");    
    for (i = 0; i < k; ++i) { // Display the concatenated string
        printf("%c", str1[i]);
    }
    printf("\n\n");
	
	return 0; // Return 0 to indicate successful execution of the program
}
