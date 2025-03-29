#include <stdio.h> // Include the standard input/output header file.

void main()  
{  
    int i, n1, n2, j, hcf=1; // Declare variables to store input and results.

    printf("\n\n  HCF of two numbers:\n "); // Print a message.
    printf("----------------------\n"); // Print a separator.

    printf("Input 1st number for HCF: ");  // Prompt the user for input.
    scanf("%d", &n1);  // Read the first number from the user.
    printf("Input 2nd number for HCF: ");  // Prompt the user for input.
    scanf("%d", &n2);  // Read the second number from the user.

    j = (n1 < n2) ? n1 : n2;  // Determine the smaller of the two numbers. 

    // Loop to find the highest common factor (HCF).
    for(i = 1; i <= j; i++)  
    {  
        if(n1 % i == 0 && n2 % i == 0)  
        {  
            hcf = i;  // Update the HCF whenever a common factor is found.
        }  
    }  

    // Print the result.
    printf("\nHCF of %d and %d is : %d\n\n", n1, n2, hcf);  
}
