#include <stdio.h>     // Include the standard input/output header file.

int num1, num2, num3;   /* declaration of three variables */  
int sum;                /* variable to store the sum of numbers */

int main() 
{  
printf("Input three numbers separated by comma : ");   // Prompt the user to input three numbers separated by comma.
sscanf("%d, %d, %d", &num1, &num2, &num3);   // Convert the input to integers and store them in 'num1', 'num2', 'num3'.
sum = num1 + num2 + num3;   // Calculate the sum of the three numbers.
printf("%d + %d + %d = %d\n", num1, num2, num3, sum);   // Print the sum of the three numbers.  
return(0);   // Return 0 to indicate successful execution of the program.  
}  
