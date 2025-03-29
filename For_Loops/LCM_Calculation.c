#include <stdio.h> // Include the standard input/output header file.

void main()  
{  
    int i, n1, n2, max, lcm = 1;  // Declare variables to store input and results.

    printf("\n\n  LCM of two numbers:\n ");  // Print a message.
    printf("----------------------\n");  // Print a separator.

    printf("Input 1st number for LCM: ");  // Prompt the user for input.
    scanf("%d", &n1);  // Read the first number from the user.
    printf("Input 2nd number for LCM: ");  // Prompt the user for input.
    scanf("%d", &n2);  // Read the second number from the user.

    max = (n1 > n2) ? n1 : n2;  // Determine the larger of the two numbers.  

    // Loop to find the least common multiple (LCM).
    for (i = max; ; i += max)  
    {  
        if (i % n1 == 0 && i % n2 == 0)  
        {  
            lcm = i;  // Update the LCM whenever a common multiple is found.
            break;  // Exit the loop once LCM is found.
        }  
    }  

    // Print the result.
    printf("\nLCM of %d and %d = %d\n\n", n1, n2, lcm);  
}
