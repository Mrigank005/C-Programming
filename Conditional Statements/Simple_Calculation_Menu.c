#include <stdio.h>  // Include the standard input/output header file.

void main() {
  int num1,num2,opt;  // Declare variables to store user input and operation choice.

  // Prompt user for two integers and store them.
  printf("Enter the first Integer :");
  scanf("%d",&num1);
  printf("Enter the second Integer :");
  scanf("%d",&num2);

  // Display the menu for operation choice.
  printf("\nInput your option :\n");
  printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
  scanf("%d",&opt);  // Read and store the user's choice.

  switch(opt) {  // Start a switch statement based on the user's choice.
    case 1:
      printf("The Addition of  %d and %d is: %d\n",num1,num2,num1+num2);  // Perform addition and print result.
      break;

    case 2:
      printf("The Substraction of %d  and %d is: %d\n",num1,num2,num1-num2);  // Perform subtraction and print result.
      break;

    case 3:
      printf("The Multiplication of %d  and %d is: %d\n",num1,num2,num1*num2);  // Perform multiplication and print result.
      break;  

    case 4:
      if(num2==0) {
        printf("The second integer is zero. Divide by zero.\n");  // Handle division by zero.
      } else {
        printf("The Division of %d  and %d is : %d\n",num1,num2,num1/num2);  // Perform division and print result.
      }  
      break;

    case 5: 
      break;  // Exit the program.

    default:
      printf("Input correct option\n");  // Display error message for invalid input.
      break; 
  }
}
