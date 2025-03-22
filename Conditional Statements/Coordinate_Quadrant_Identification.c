#include <stdio.h>   // Include the standard input/output header file.

void main()
{
    int x, y;   // Declare two integer variables 'x' and 'y' to store coordinates.

    printf("Input the values for X and Y coordinate : ");   // Prompt the user to input coordinates.
    scanf("%d %d", &x, &y);   // Read and store the user's input in 'x' and 'y'.

    if (x > 0 && y > 0)   // Check if both 'x' and 'y' are positive.
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);   // Print a message indicating the quadrant.
    else if (x < 0 && y > 0)   // Check if 'x' is negative and 'y' is positive.
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", x, y);   // Print a message indicating the quadrant.
    else if (x < 0 && y < 0)   // Check if both 'x' and 'y' are negative.
        printf("The coordinate point (%d, %d) lies in the Third quadrant.\n", x, y);   // Print a message indicating the quadrant.
    else if (x > 0 && y < 0)   // Check if 'x' is positive and 'y' is negative.
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", x, y);   // Print a message indicating the quadrant.
    else if (x == 0 && y == 0)   // Check if both 'x' and 'y' are zero.
        printf("The coordinate point (%d,%d) lies at the origin.\n", x, y);   // Print a message indicating that it's at the origin.
}
