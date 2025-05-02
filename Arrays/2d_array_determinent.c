#include <stdio.h>
int determinant(int a[3][3]) 
{
    int b[2][2], d[3], D;
    for (int k = 0; k < 3; k++) 
    {
        int m = 0, n = 0;
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                if (j != k || i != 0) 
                {
                    b[m][n] = a[i][j];
                    n++;
                }
            }
            if (i != 0) 
            {
                m++;
            }
        }
        d[k] = a[0][k] * ((b[0][0] * b[1][1]) - (b[1][0] * b[0][1]));
    }
    D = d[0] - d[1] + d[2];
    return D;
}
int main() 
{
    int a[3][3];
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int det = determinant(a);
    printf("Determinant= %d\n", det);

    return 0;
}