#include<stdio.h>
void main()
{
    int a[2][2],b[2][2],t[2][2];
    printf("Enter the Elements of First Array: ");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Elements of Second Array: ");
    for(int i=0;i<2;i++)
    {
        
        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                a[i][j]=a[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            t[i][j]=a[j][i];
        }
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n"); 
    }
} 