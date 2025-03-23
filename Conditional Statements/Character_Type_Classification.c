#include <stdio.h>  // Include the standard input/output header file.

int main()  
{  
    char chr;  // Declare a variable to store a single character.

    printf("Input a character: ");  // Prompt user for input.  
    scanf('%c', & chr);  // Read and store the character input.

    /* Checks whether it is an alphabet */  
    if((chr>='a' && chr<='z') || (chr>='A' && chr<='Z'))  
    {  
        printf("This is an alphabet.\n");  // Print message for alphabet.
    }  
    else if(chr>='0' && chr<='9') /* whether it is digit */  
    {  
        printf("This is a digit.\n");  // Print message for digit.
    }  
    else /* Else special character */  
    {  
        printf("This is a special character.\n");  // Print message for special character.
    }  
}
