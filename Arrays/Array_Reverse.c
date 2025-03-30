#include <stdio.h>
// Main function
int main()
{
   int i, n, a[100];
   // Display a message to the user about the program's purpose
   printf("\n\nRead n number of values in an array and display it in reverse order:\n");
   printf("------------------------------------------------------------------------\n");
   // Prompt the user to input the number of elements to store in the array
   printf("Input the number of elements to store in the array :");
   scanf("%d", &n);
   // Prompt the user to input n elements into the array
   printf("Input %d number of elements in the array :\n", n);
   for (i = 0; i < n; i++)
   {
      printf("element - %d : ", i);
      scanf("%d", &a[i]);  // Read the input and store it in the array
   }
   // Display the values stored in the array
   printf("\nThe values stored in the array are : \n");
   for (i = 0; i < n; i++)
   {
       printf("% 5d", a[i]);  // Print each element in the array
   }
   // Display the values stored in the array in reverse order
   printf("\n\nThe values stored in the array in reverse are :\n");
   for (i = n - 1; i >= 0; i--)
   {
       printf("% 5d", a[i]);  // Print each element in reverse order
   }
   printf("\n\n");
   return 0;
}
