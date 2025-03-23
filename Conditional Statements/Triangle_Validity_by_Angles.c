#include <stdio.h>  // Include the standard input/output header file.

void main()  
{  
    int anga, angb, angc, sum; // Declare variables for the angles of the triangle.

    printf("Input three angles of triangle : ");  // Prompt user for input.  
    scanf("%d %d %d", &anga, &angb, &angc);  // Read and store the angles of the triangle.

    /* Calculate the sum of all angles of triangle */  
    sum = anga + angb + angc;   

    /* Check whether sum=180 then its a valid triangle otherwise not */  
    if(sum == 180)   
    {  
        printf("The triangle is valid.\n");  // Print message for valid triangle.
    }  
    else  
    {  
        printf("The triangle is not valid.\n");  // Print message for invalid triangle.
    }  
 } 
