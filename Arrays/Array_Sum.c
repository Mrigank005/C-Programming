#include <stdio.h>
// Main function
int main()
{
    int a[100];  // Declare an array of size 100 to store integer values
    int i, n, sum = 0;  // Declare variables to store array size, loop counter, and sum
    // Display a message to the user about the program's purpose
    printf("\n\nFind sum of all elements of array:\n");
    printf("--------------------------------------\n");	
    // Prompt the user to input the number of elements to be stored in the array
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    // Prompt the user to input n elements into the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);  // Read the input and store it in the array
    }

    // Calculate the sum of all elements in the array using a for loop
    for (i = 0; i < n; i++)
    {
        sum += a[i];  // Add each element to the sum
    }
    // Display the sum of all elements stored in the array
    printf("Sum of all elements stored in the array is : %d\n\n", sum);
	return 0;
}
