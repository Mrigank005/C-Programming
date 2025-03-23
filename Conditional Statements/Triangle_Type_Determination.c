#include <stdio.h>  // Include the standard input/output header file.

int main()
{
    int sidea, sideb, sidec; // Declare variables for the sides of the triangle.
    /*
     * Reads all sides of a triangle
     */
    printf("Input three sides of triangle: ");  // Prompt user for input.
    scanf("%d %d %d", &sidea, &sideb, &sidec);  // Read and store the sides of the triangle.
    // Check if the sides form a valid triangle
    if ((sidea + sideb > sidec) && (sidea + sidec > sideb) && (sideb + sidec > sidea)) {
        // If the sides form a valid triangle, continue with the classification
        if(sidea==sideb && sideb==sidec) // Check if all sides are equal.
        {
            printf("This is an equilateral triangle.\n");  // Print message for equilateral triangle.
        }
        else if(sidea==sideb || sidea==sidec || sideb==sidec) // Check if two sides are equal.
        {
            printf("This is an isosceles triangle.\n");  // Print message for isosceles triangle.
        }
        else // If no sides are equal.
        {
            printf("This is a scalene triangle.\n");  // Print message for scalene triangle.
        }
    } else {
        // If the sides do not form a valid triangle
        printf("Input sides do not form a valid triangle.\n");
    }
    return 0;
} 
