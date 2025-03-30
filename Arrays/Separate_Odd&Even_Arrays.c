#include <stdio.h>

int main()
{
    int arr1[10], arr2[10], arr3[10];
    int i, j = 0, k = 0, n;

    // Prompt user for input
    printf("\n\nSeparate odd and even integers in separate arrays:\n");
    printf("------------------------------------------------------\n");
    printf("Input the number of elements to be stored in the array :");
    scanf("%d", &n);

    // Input elements for the array
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // Separate odd and even integers into separate arrays
    for (i = 0; i < n; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            arr2[j] = arr1[i];
            j++;
        }
        else
        {
            arr3[k] = arr1[i];
            k++;
        }
    }

    // Print the Even elements
    printf("\nThe Even elements are : \n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr2[i]);
    }

    // Print the Odd elements
    printf("\nThe Odd elements are :\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n\n");
	return 0;
}
