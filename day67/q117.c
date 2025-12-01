//Q117: Merge two sorted arrays

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

void merge(int a[], int m, int b[], int n, int res[])
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (a[i] < b[j])
            res[k++] = a[i++];
        else
            res[k++] = b[j++];
    }

    while (i < m)
        res[k++] = a[i++];

    while (j < n)
        res[k++] = b[j++];
}

int main()
{
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d", &m);

    int a[m];
    for (int i = 0; i < m; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int b[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &b[i]);
    }

    int res[m + n];
    merge(a, m, b, n, res);

    for (int i = 0; i < m + n; i++)
    {
        printf("%d", res[i]);
        if (i != m + n - 1)
            printf(" ");
    }

    return 0;
}
