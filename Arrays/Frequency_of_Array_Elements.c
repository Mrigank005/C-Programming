#include <stdio.h>

int main()
{
    int arr1[100], fr1[100];
    int n, i, j, ctr;

    // Prompt user for input
    printf("\n\nCount frequency of each element of an array:\n");
    printf("------------------------------------------------\n");
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    // Input elements for the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
        fr1[i] = -1; // Initialize frequency array with -1
    }

    // Count the frequency of each element in the array
    for (i = 0; i < n; i++)
    {
        ctr = 1; // Initialize counter for each element
        for (j = i + 1; j < n; j++)
        {
            if (arr1[i] == arr1[j])
            {
                ctr++;     // Increment counter for matching elements
                fr1[j] = 0; // Mark the duplicate element's frequency as 0
            }
        }

        // If frequency array value is not marked as 0, set it to the counter
        if (fr1[i] != 0)
        {
            fr1[i] = ctr;
        }
    }

    // Print the frequency of each element in the array
    printf("\nThe frequency of all elements of the array : \n");
    for (i = 0; i < n; i++)
    {
        if (fr1[i] != 0)
        {
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
	}
	return 0;
}
