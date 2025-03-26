#include <stdio.h>  // Include the standard input/output header file.

void main() {
    int i, ctr;  // Declare variables 'i' for loop counter and 'ctr' for user input.

    printf("Input number of terms : ");  // Print a message to prompt user input.
    scanf("%d", &ctr);  // Read the value of 'ctr' from the user.

    for (i = 1; i <= ctr; i++) {  // Start a for loop to iterate 'ctr' times.
        printf("Number is : %d and cube of the %d is :%d \n", i, i, (i * i * i));  // Print the number, its cube, and message.
    }
}
