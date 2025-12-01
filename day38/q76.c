// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

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

int issymmetric(int n, int ar[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i][j] != ar[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    if (n != m)
    {
        printf("False");
        return 0;
    }

    int ar[n][m];
    matrixi(n, m, ar);

    if (issymmetric(n, ar))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
