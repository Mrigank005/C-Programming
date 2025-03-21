#include <stdio.h>    // Include the standard input/output header file.

int main()  
{  
int num1, num2;   // Declare two integer variables 'num1' and 'num2'.
int sum, sub, mult, mod;   // Declare variables to store the results of arithmetic operations.
float div;   // Declare a float variable 'div' to store the result of division.

    /* 
     * Read two numbers from user separated by comma 
     */  
printf("Input any two numbers separated by comma : ");   // Prompt the user to input two numbers separated by a comma.
scanf("%d,%d", &num1, &num2);   // Read and store the user's input in 'num1' and 'num2'.

    /* 
     * Performs all arithmetic operations 
     */   
sum = num1 + num2;   // Calculate the sum of 'num1' and 'num2'.
sub = num1 - num2;   // Calculate the difference between 'num1' and 'num2'.
mult = num1 * num2;  // Calculate the product of 'num1' and 'num2'.
div = (float)num1 / num2;   // Calculate the division of 'num1' by 'num2' and cast the result to a float.
mod = num1 % num2;   // Calculate the modulus of 'num1' and 'num2'.

    /* 
     * Prints the result of all arithmetic operations 
     */  
printf("%d + %d = %d\n", num1, num2, sum);   // Print the sum.
printf("%d - %d = %d\n", num1, num2, sub);   // Print the difference.
printf("%d * %d = %d\n", num1, num2, mult);   // Print the product.
printf("%d / %d = %f\n", num1, num2, div);   // Print the quotient.
printf("%d % %d = %d\n", num1, num2, mod);   // Print the modulus.

return 0;   // Return 0 to indicate successful execution of the program.   
}
