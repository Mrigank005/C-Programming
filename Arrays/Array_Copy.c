#include <stdio.h>
// Main function
int main()
{
    int arr1[100], arr2[100];  // Declare two arrays of size 100 to store integer values
    int i, n;  // Declare variables to store array size and loop counter
    // Display a message to the user about the program's purpose
    printf("\n\nCopy the elements of one array into another array:\n");
    printf("----------------------------------------------------\n");
    // Prompt the user to input the number of elements to be stored in the array
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    // Prompt the user to input n elements into the first array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);  // Read the input and store it in the first array
    }
    /* Copy elements of the first array into the second array. */
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];  // Copy each element from the first array to the second array
    }

    /* Prints the elements of the first array */
    printf("\nThe elements stored in the first array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("% 5d", arr1[i]);  // Print each element in the first array
    }
    /* Prints the elements copied into the second array. */
    printf("\n\nThe elements copied into the second array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("% 5d", arr2[i]);  // Print each element in the second array
    }
    printf("\n\n");  // Print new lines for better formatting
	return 0;
}
