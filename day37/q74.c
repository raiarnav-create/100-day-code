/*Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/

#include <stdio.h>

void matrixi(int r, int c, int ar[r][c])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element at index %d, %d: ", (i + 1), (j + 1));
            scanf("%d", &ar[i][j]);
        }
        printf("\n");
    }
}

void transpose(int r, int c, int ar[r][c])
{
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int ar[r][c];
    matrixi(r, c, ar);

    printf("The transpose of the matrix is:\n");
    transpose(r, c, ar);

    return 0;
}
