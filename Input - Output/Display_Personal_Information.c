#include <stdio.h>    // Include the standard input/output header file.

int main() {
char firstname[20], lastname[20];   // Declare character arrays for first name and last name with a maximum size of 20 characters each.
int bir_year;   // Declare an integer variable 'bir_year' to store the year of birth.

printf("Input your firstname: ");   // Prompt the user to input their first name.
scanf("%s", firstname);   // Read and store the user's input in 'firstname'.

printf("Input your lastname: ");   // Prompt the user to input their last name.
scanf("%s", lastname);   // Read and store the user's input in 'lastname'.

printf("Input your year of birth: ");   // Prompt the user to input their year of birth.
scanf("%d", &bir_year);   // Read and store the user's input in 'bir_year'.

printf("Name: %s %s, DOB: %d\n", firstname, lastname, bir_year);   // Print the first name, last name, and year of birth.

return 0;   // Return 0 to indicate successful execution of the program.
}
