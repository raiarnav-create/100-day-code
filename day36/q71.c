#include <stdio.h>

void matrixi(int n, int l, int ar[n][l])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("Enter Element of matrix at index %d, %d\n", (i + 1), (j + 1));
            scanf("%d", &ar[i][j]);
        }
        printf("\n");
    }
}

void matrixp(int n, int l, int ar[n][l])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, l;
    printf("Enter size of array:");
    scanf("%d", &n);
    scanf("%d", &l);
    int ar[n][l];
    matrixi(n, l, ar);
    matrixp(n, l, ar);
    return 0;
}
