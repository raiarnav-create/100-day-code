//Q110: Maximum element in each subarray of size k (brute force)

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 3, 1, 4, 5, 2, 3, 6], k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr = [5, 1, 3, 4, 2], k = 1
Output 2:
5 1 3 4 2

*/

#include <stdio.h>

void max_in_windows(int ar[], int n, int k, int res[])
{
    for (int i = 0; i <= n - k; i++)
    {
        int max = ar[i];
        for (int j = i; j < i + k; j++)
        {
            if (ar[j] > max)
                max = ar[j];
        }
        res[i] = max;
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

    max_in_windows(ar, n, k, res);

    for (int i = 0; i < size; i++)
    {
        printf("%d", res[i]);
        if (i != size - 1)
            printf(" ");
    }

    return 0;
}
