#include <stdio.h>  // Include the standard input/output header file.

void main()
{
   int monno;  // Declare a variable to store the input month number.
   char monnm[15];  // Declare a character array to store the month name.

   printf("Input Month No : ");  // Prompt the user to input a month number.
   scanf("%d",&monno);  // Read and store the input month number.

   switch(monno)  // Start a switch statement based on the input month number.
   {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	       printf("Month have 31 days. \n");  // Print a message for months with 31 days.
	       break;
	case 2:
	       printf("The 2nd month is a February and have 28 days. \n");  // Print a message for February with 28 days.
	       printf("in leap year The February month  Have 29 days.\n");  // Print a message for February with 29 days in a leap year.
	       break;
	case 4:
	case 6:
	case 9:
	case 11:
	       printf("Month have 30 days. \n");  // Print a message for months with 30 days.
	       break;
	default:
	       printf("Invalid Month number.\nPlease try again ....\n");  // Print a message for an invalid input.
	       break;
      }
}
