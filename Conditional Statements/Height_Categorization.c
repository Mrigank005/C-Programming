#include <stdio.h>   // Include the standard input/output header file.

void main()
{
    float Height;   // Declare a floating-point variable 'Height' to store the height of the person.

    printf("Input the height of the person (in centimetres) :");   // Prompt the user to input the height in centimeters.
    scanf("%f", &Height);   // Read and store the user's input in 'Height'.

    if (Height < 150.0)   // Check if 'Height' is less than 150.0.
        printf("The person is Dwarf. \n");   // Print a message indicating that the person is a dwarf.
    else if ((Height >= 150.0) && (Height < 165.0))   // Check if 'Height' is between 150.0 and 165.0.
        printf("The person is  average heighted. \n");   // Print a message indicating that the person has an average height.
    else if ((Height >= 165.0) && (Height <= 195.0))   // Check if 'Height' is between 165.0 and 195.0.
        printf("The person is taller. \n");   // Print a message indicating that the person is taller.
    else
        printf("Abnormal height.\n");   // Print a message indicating that the height is abnormal.
}
