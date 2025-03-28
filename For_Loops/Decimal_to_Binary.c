#include <stdio.h>  // Include the standard input/output header file.
#include <stdlib.h> // Include the standard library header file for dynamic memory allocation.

// Function to convert decimal to binary.
char *decimal_to_binary(int dn)
{
  int i, j, temp; // Declare variables for iteration and temporary storage.
  char *ptr;      // Declare a pointer to hold the binary string.
  temp = 0;       // Initialize temp variable.

  ptr = (char*)malloc(32+1); // Allocate memory for a string of maximum 32 bits.

  // Loop to convert decimal to binary.
  for (i = 31 ; i >= 0 ; i--)
  {
    j = dn >> i; // Right shift dn by i positions.
    if (j & 1)   // Check if the rightmost bit is 1.
      *(ptr+temp) = 1 + '0'; // Store '1' in the string.
    else
      *(ptr+temp) = 0 + '0'; // Store '0' in the string.
    temp++; // Increment temp.
  }

  *(ptr+temp) = '\0'; // Add null terminator to the end of the string.
  return  ptr; // Return the binary string.
}

int main()
{
  int dn; // Declare a variable to hold the decimal number.
  char *ptr; // Declare a pointer to hold the binary string.

  printf("Input a decimal number: ");
  scanf("%d", &dn); // Prompt user for input and store it in dn.

  ptr = decimal_to_binary(dn); // Call the function to convert decimal to binary.

  printf("Binary number equivalent to said decimal number is: %s", ptr); // Print the binary string.

  free(ptr); // Free the dynamically allocated memory.
  return 0; // Indicate successful program execution.
}
