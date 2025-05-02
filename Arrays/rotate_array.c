#include <stdio.h>

void rotatearr(int arr[], int n) 
{
    int temp[2];
    temp[0] = arr[n - 1];
    temp[1] = arr[n - 2];

    for (int i = n - 2; i >= 0; i--) 
    {
        arr[i + 2] = arr[i];
    }

    arr[0] = temp[0];
    arr[1] = temp[1];
}

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotatearr(arr, n);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

return 0;
}