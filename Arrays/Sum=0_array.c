#include <stdio.h>

int main() 
{
    int n, i, j;

    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements for the array:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) 
    {
        for (j =i+1 ; j < n; j++) 
        {
            if (a[i] + a[j] == 0) 
            {
                printf("Elements of the array whose sum = 0: %d and %d\n", a[i], a[j]);
            }
        }
    }
return 0;
}