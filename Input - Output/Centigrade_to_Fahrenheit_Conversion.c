#include <stdio.h>     // Include the standard input/output header file.

float fahr;     /* degrees fahrenheit */
float cent;     /* degrees centigrade */

int main() {
printf("Input a temperature (in Centigrade): ");  // Prompt the user to input a temperature in centigrade.
scanf("%f", &cent);               // Convert the input from 'line_text' to a float and store it in 'temp_c'.

fahr = ((9.0 / 5.0) * cent) + 32.0;         // Convert temperature from centigrade to fahrenheit and store it in 'temp_f'.
printf("%f degrees Centigrade = %f degrees Fahrenheit.\n", cent, fahr);    // Print the temperature in fahrenheit.

return(0);   // Return 0 to indicate successful execution of the program.
}
