#include <stdio.h>   // Include the standard input/output header file.

void main()
{
  int age;   // Declare an integer variable 'age' to store the age of the candidate.

  printf("Input the age of the candidate : ");   // Prompt the user to input the age of the candidate.
  scanf("%d",&age);   // Read and store the user's input in 'age'.

  if (age<18)   // Check if 'age' is less than 18.
  {
    printf("Sorry, You are not eligible to caste your vote.\n");   // Print a message indicating the candidate is not eligible to vote.
    printf("You would be able to caste your vote after %d year.\n",18-age);   // Print the number of years until the candidate is eligible to vote.
  }
  else
    printf("Congratulation! You are eligible for casting your vote.\n");   // Print a message indicating the candidate is eligible to vote.
}
