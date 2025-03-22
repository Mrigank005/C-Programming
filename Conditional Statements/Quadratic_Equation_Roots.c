#include <stdio.h>   // Include the standard input/output header file.
#include <math.h>    // Include the math library for mathematical functions.

void main()
{
   int a, b, c, d;   // Declare variables to store coefficients and discriminant.
   float x1, x2;     // Declare variables to store roots.

   printf("Input the value of a, b & c : ");   // Prompt user for input.
   scanf("%d%d%d", &a, &b, &c);   // Read and store coefficients in 'a', 'b', and 'c'.
   d = b*b - 4*a*c;   // Calculate the discriminant.

   if(d == 0)   // Check if discriminant is zero.
   {
     printf("Both roots are equal.\n");
     x1 = -b / (2.0 * a);   // Calculate the single root.
     x2 = x1;
     printf("First  Root Root1 = %f\n", x1);   // Print the roots.
     printf("Second Root Root2 = %f\n", x2);
   }
   else if(d > 0)   // Check if discriminant is positive.
   {
       printf("Both roots are real and different.\n");
       x1 = (-b + sqrt(d)) / (2 * a);   // Calculate the first root.
       x2 = (-b - sqrt(d)) / (2 * a);   // Calculate the second root.
       printf("First  Root Root1 = %f\n", x1);   // Print the roots.
       printf("Second Root Root2 = %f\n", x2);
   }
   else   // If discriminant is negative.
       printf("Roots are imaginary;\nNo Solution. \n");   // Print no solution message.
}
