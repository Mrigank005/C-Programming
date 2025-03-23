#include <stdio.h>  // Include the standard input/output header file.

void main()
{
   int cdigit;  // Declare a variable to store the input digit.

   printf("Input Digit(0-9) : ");  // Prompt the user to input a digit.
   scanf("%d",&cdigit);  // Read and store the input digit.

   switch(cdigit)  // Start a switch statement based on the input digit.
   {
	 case 0:
	       printf("Zero\n");  // Print "Zero" for input digit 0.
	       break;

	 case 1:
	       printf("One\n");  // Print "One" for input digit 1.
	       break;
	case 2:
	       printf("Two\n");  // Print "Two" for input digit 2.
	       break;
	case 3:
	       printf("Three\n");  // Print "Three" for input digit 3.
	       break;
	case 4:
	       printf("Four\n");  // Print "Four" for input digit 4.
	       break;
	case 5:
	       printf("Five\n");  // Print "Five" for input digit 5.
	       break;
	case 6:
	       printf("Six\n");  // Print "Six" for input digit 6.
	       break;
	case 7:
	       printf("Seven\n");  // Print "Seven" for input digit 7.
	       break;
	case 8:
	       printf("Eight\n");  // Print "Eight" for input digit 8.
	       break;
	case 9:
	       printf("Nine\n");  // Print "Nine" for input digit 9.
	       break;
	default:
	       printf("Invalid digit. \nPlease try again ....\n");  // Print a message for an invalid input.
	       break;
      }
}
