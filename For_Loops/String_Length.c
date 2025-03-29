#include <stdio.h>   // Include the standard input/output header file. 
#include <string.h>
void main()
{
    // Variable declarations
char str1[50];
int i, l = 0;
    // Prompting user for input
printf("\n\nFind the length of a string:\n ");
printf("-------------------------------------\n");
    // Getting user input
printf("Input a string : ");
scanf("%s", str1);
    // Loop to count characters in the string
for (i = 0; str1[i] != '\0'; i++)
    {
l++;
    }
    // Printing the length of the string
printf("The string contains %d number of characters. \n", l);
printf("So, the length of the string %s is : %d\n\n", str1, l);
}
