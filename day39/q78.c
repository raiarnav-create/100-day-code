// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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

int diagonal_distinct(int n, int ar[n][n])
{
    // check for duplicates on the diagonal
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i][i] == ar[j][j])
            {
                return 0; // duplicate found → not distinct
            }
        }
    }
    return 1; // no duplicates
}

int main()
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    if (r != c)
    {
        printf("False");
        return 0;
    }

    int ar[r][c];
    matrixi(r, c, ar);

    if (diagonal_distinct(r, ar))
        printf("True");
    else
        printf("False");

    return 0;
}
