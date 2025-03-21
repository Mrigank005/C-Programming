#include <stdio.h>     // Include the standard input/output header file.

float kmph;              /* kilometers per hour */
float miph;              /* miles per hour (to be computed) */

int main()
{
printf("Input kilometers per hour: ");   // Prompt the user to input kilometers per hour.
sscanf("%f", &kmph);   // Convert the input to a float and store it in 'kmph'.

miph = (kmph * 0.6213712);   // Convert kilometers per hour to miles per hour.
printf("%f kilometer per hour = %f miles per hour\n", kmph, miph);   // Print the result in miles per hour.

return(0);   // Return 0 to indicate successful execution of the program.
}
