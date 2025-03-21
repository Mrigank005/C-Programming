#include <stdio.h>     // Include the standard input/output header file.

float radius;          /* radius of the sphere */
float volume;          /* volume of the sphere (to be computed) */

/* the value of pi to 50 places, from wikipedia */
const float PI = 3.14159265358979323846264338327950288419716939937510;

int main() {
printf("Input the radius of the sphere : ");  // Prompt the user to input the radius of the sphere.
scanf("%f", &radius);         // Convert the input from 'line_text' to a float and store it in 'myradius'.

myvolume = (4.0 / 3.0) * PI * (radius * radius * radius);  /* Calculate the volume of the sphere using the formula. */
printf("The volume of sphere of radius = %f is %f.\n", radius, volume);  // Print the calculated volume of the sphere.

return(0);   // Return 0 to indicate successful execution of the program.
}
