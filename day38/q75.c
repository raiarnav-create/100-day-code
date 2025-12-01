// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

void matrixi(int r, int c, int ar[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element at index %d, %d: ", i + 1, j + 1);
            scanf("%d", &ar[i][j]);
        }
        printf("\n");
    }
}

void matrixadd(int r, int c, int a[r][c], int b[r][c], int result[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void matrixp(int r, int c, int ar[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];
    matrixi(r1, c1, a);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    int b[r2][c2];
    matrixi(r2, c2, b);

    if (r1 != r2 || c1 != c2)
    {
        printf("Matrix addition not possible.\n");
        return 0;
    }

    int result[r1][c1];
    matrixadd(r1, c1, a, b, result);

    printf("Resultant matrix after addition is:\n");
    matrixp(r1, c1, result);

    return 0;
}
