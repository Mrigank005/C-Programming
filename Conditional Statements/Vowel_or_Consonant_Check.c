#include <stdio.h>  // Include the standard input/output header file.

void main()  
{  
    char chr;  // Declare a variable to store a single character.

    printf("Input any alphabet : ");  // Prompt user for input.  
    scanf("%c", &chr);  // Read and store the character input.

    if(chr=='a' || chr=='e' || chr=='i' || chr=='o' || chr=='u' || chr=='A' || chr=='E' || chr=='I' || chr=='O' || chr=='U')  
    {  
        printf("The alphabet is a vowel.\n");  // Print message for vowel.
    }  
    else if((chr>='a' && chr<='z') || (chr>='A' && chr<='Z'))  
    {  
        printf("The alphabet is a consonant.\n");  // Print message for consonant.
    }  
    else  
    {  
        printf("The character is not an alphabet.\n");  // Print message for non-alphabet character.
    }   
}
