#include<stdio.h>
void main()
{
    int m,n,o,c=0;
    printf("Enter no of rows in the array1: ");
    scanf("%d",&m);
    printf("Enter no of columns in the array1: ");
    scanf("%d",&n);
    int a1[m][n];
    printf("Enter the Elements of Array1: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&a1[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Enter no of rows in the array2: ");
    scanf("%d",&m);
    printf("Enter no of columns in the array2: ");
    scanf("%d",&n);
    int a2[m][n];
    printf("Enter the Elements of Array2: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&a2[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=a1[i][j]+a2[i][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
}