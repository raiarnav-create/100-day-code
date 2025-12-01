//Q111: First negative integer in each subarray of size k (brute force)

/*
Sample Test Cases:
Input 1:
arr = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/

#include <stdio.h>

void first_negative(int ar[], int n, int k, int res[])
{
    for (int i = 0; i <= n - k; i++)
    {
        int found = 0;
        for (int j = i; j < i + k; j++)
        {
            if (ar[j] < 0)
            {
                res[i] = ar[j];
                found = 1;
                break;
            }
        }
        if (!found)
            res[i] = 0;
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

    int k;
    printf("Enter k: ");
    scanf("%d", &k);

    int size = n - k + 1;
    int res[size];

    first_negative(ar, n, k, res);

    for (int i = 0; i < size; i++)
    {
        printf("%d", res[i]);
        if (i != size - 1)
            printf(" ");
    }

    return 0;
}
