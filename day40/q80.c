//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

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

void matrixmul(int r1, int c1, int r2, int c2, int a[r1][c1], int b[r2][c2], int result[r1][c2])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
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

    // Check if multiplication is possible
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int result[r1][c2];

    matrixmul(r1, c1, r2, c2, a, b, result);

    printf("Resultant matrix after multiplication is:\n");
    matrixp(r1, c2, result);

    return 0;
