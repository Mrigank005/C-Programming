#include <stdio.h>    // Include the standard input/output header file.

void main()
{
    int rollno, phy, chem, CA, total;   // Declare variables for roll number, marks, total, etc.
    float per;   // Declare a variable to store percentage.
    char name[20], div[10];   // Declare arrays for name and division.

    printf("Input the Roll Number of the student :");   // Prompt user for input.
    scanf("%d", &rollno);   // Read and store roll number.

    printf("Input the Name of the Student :");   // Prompt user for input.
    scanf("%s", name);   // Read and store name.

    printf("Input the marks of Physics, chemistry and Computer Application : ");   // Prompt user for input.
    scanf("%d %d %d", &phy, &chem, &CA);   // Read and store marks for three subjects.

    total = phy + chem + CA;   // calculate total marks.
    per = total / 3.0;   // calculate percentage.

    if (per >= 60)   // check if percentage is greater than or equal to 60.
        printf("First Division");   // Assign division as "First" if condition is true.
    else if (per < 60 && per >= 48)   // check if percentage is between 48 and 60.
        printf("Second Division");   // Assign division as "Second" if condition is true.
    else if (per < 48 && per >= 36)   // check if percentage is between 36 and 48.
        printf("Pass");   // Assign division as "Pass" if condition is true.
    else   // If none of the above conditions are met.
        printf("Fail");   // Assign division as "Fail".

    printf("\nRoll No : %d\nName of Student : %s\n", rollno, name);   // Print roll number and name.
    printf("Marks in Physics : %d\nMarks in chemistry : %d\nMarks in Computer Application : %d\n", phy, chem, CA);   // Print marks in each subject.
    printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n", total, per, div);   // Print total marks, percentage, and division.
}
