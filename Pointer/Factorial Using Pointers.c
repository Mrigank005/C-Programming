#include <stdio.h>

// Function prototype to find factorial of a number using pointers
void findFact(int, int*);

int main() {
    int fact; // Variable to store factorial
    int num1; // Variable to store user input

    printf("\n\n Pointer : Find the factorial of a given number :\n"); 
    printf("------------------------------------------------------\n");	

    // Input a number from the user
    printf(" Input a number : ");
    scanf("%d", &num1);		

    // Call the function to calculate factorial passing the address of 'fact'
    findFact(num1, &fact);

    // Display the factorial of the given number
    printf(" The Factorial of %d is : %d \n\n", num1, fact);

    return 0;
}

// Function definition to find factorial using pointers
void findFact(int n, int *f) {
    int i;
    *f = 1; // Initialize the factorial to 1

    // Loop to calculate factorial of the given number
    for (i = 1; i <= n; i++) {
        *f = *f * i; // Calculate factorial by multiplying *f with i
    }
}
