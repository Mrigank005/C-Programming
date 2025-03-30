#include <stdio.h>
// Main function
int main()
{
    int arr[100];  // Declare an array of size 100 to store integer values
    int n, mm = 1, ctr = 0;  // Declare variables to store array size, mm (unused), and duplicate counter
    int i, j;  // Declare loop counters
    // Prompt the user to input the number of elements to be stored in the array
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);
    // Prompt the user to input n elements into the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);  // Read the input and store it in the array
    }
    // Check for duplicate elements in the array using nested loops
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                ctr++;  // Increment the duplicate counter if a duplicate is found
                break;  // Exit the inner loop as soon as a duplicate is found
            }
        }
    }
    // Display the total number of duplicate elements found in the array
    printf("Total number of duplicate elements found in the array: %d\n", ctr);
    return 0;  // Return 0 to indicate successful execution
}
