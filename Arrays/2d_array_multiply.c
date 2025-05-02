#include <stdio.h>

void main() 
{
    int m1, n1, m2, n2;

    printf("Enter no of rows in the array1: ");
    scanf("%d", &m1);
    printf("Enter no of columns in the array1: ");
    scanf("%d", &n1);
    int a[m1][n1];
    printf("Enter the Elements of Array1: ");
    for (int i = 0; i < m1; i++) 
    {
        for (int j = 0; j < n1; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < m1; i++) 
    {
        for (int j = 0; j < n1; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Enter no of rows in the array2: ");
    scanf("%d", &m2);
    printf("Enter no of columns in the array2: ");
    scanf("%d", &n2);
    int b[m2][n2];
    printf("Enter the Elements of Array2: ");
    for (int i = 0; i < m2; i++) 
    {
        for (int j = 0; j < n2; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < m2; i++) 
    {
        for (int j = 0; j < n2; j++) 
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Check if matrix multiplication is possible
    if (n1 != m2) 
    {
        printf("Matrix multiplication not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return;
    }

    printf("The multiplication of Array 1 and Array 2:\n");
    int c[m1][n2];
    for (int i = 0; i < m1; i++) 
    {
        for (int j = 0; j < n2; j++) 
        {
            c[i][j] = 0;
            for (int k = 0; k < n1; k++) 
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\n");
    for (int i = 0; i < m1; i++) 
    {
        for (int j = 0; j < n2; j++) 
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}