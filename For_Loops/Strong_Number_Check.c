#include <stdio.h> // Include the standard input/output header file.

void main()  
{  
    int i, n, n1, s1 = 0, j; // Declare variables to store input and results.
    long fact; // Declare a variable to store factorial.

    printf("\n\nCheck whether a number is Strong Number or not:\n "); // Print a message.
    printf("----------------------------------------------------\n"); // Print a separator.

    printf("Input a number to check whether it is Strong number: "); // Prompt the user for input. 
    scanf("%d", &n); // Read the number from the user.

    n1 = n; // Store the original number for comparison.

    // Loop to process each digit of the number.
    for (j = n; j > 0; j = j / 10) 
    {  
        fact = 1; // Initialize factorial.
        // Loop to calculate factorial of a digit.
        for (i = 1; i <= j % 10; i++)  
        {  
            fact = fact * i;  
        }  
        s1 = s1 + fact;  // Accumulate factorial sum.
    }  

    if (s1 == n1)  
    {  
        printf("\n%d is Strong number.\n\n", n1);  // Print result if it's a strong number.
    }  
    else  
    {  
        printf("\n%d is not Strong number.\n\n", n1);  // Print result if it's not a strong number.
    }  
}
