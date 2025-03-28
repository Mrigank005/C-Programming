#include <stdio.h> // Include the standard input/output header file.

void  main()
{
  int n, i, sum; // Declare variables for user input, loop control, and sum.
  int mn, mx;    // Variables mn and mx are declared but not used. Consider removing them.

  printf("Input the  number : "); // Prompt the user for input.
  scanf("%d", &n); // Read the value of 'n' from the user.
  sum = 0; // Initialize the sum variable.

  printf("The positive divisors  : "); // Print a message to indicate positive divisors are being displayed.

  for (i = 1; i < n; i++) // Loop to find and display positive divisors.
  {
    if (n % i == 0) // If 'i' is a divisor of 'n'.
    {
      sum = sum + i; // Add 'i' to the sum.
      printf("%d  ", i); // Print 'i' as a positive divisor.
    }
  }

  printf("\nThe sum of the divisors is : %d", sum); // Print the sum of the divisors.

  if (sum == n) // Check if the sum of divisors is equal to the original number.
    printf("\nSo, the number is perfect."); // If true, print that the number is perfect.
  else
    printf("\nSo, the number is not perfect."); // If false, print that the number is not perfect.

  printf("\n"); // Print a new line for better formatting.
}
