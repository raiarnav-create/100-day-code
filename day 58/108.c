//Q108: Product of array except self

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>

void product_except_self(int ar[], int n, int res[])
{
    for (int i = 0; i < n; i++)
    {
        int prod = 1;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
                prod *= ar[j];
        }
        res[i] = prod;
    }
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ar[i]);
    }

    int res[n];
    product_except_self(ar, n, res);

    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", res[i]);
        if (i != n - 1)
            printf(",");
    }
    printf("]");

    return 0;
}
