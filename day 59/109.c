//Q109: Maximum sum of all subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr = [100, 200, 300, 400], k = 2
Output 1:
700

Input 2:
arr = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
Output 2:
39

Input 3:
arr = [100, 200, 300, 400], k = 1
Output 3:
400

*/

#include <stdio.h>

int max_subarray_sum_k(int ar[], int n, int k)
{
    if (k > n || k <= 0) return -2147483648; // indicate invalid

    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += ar[i];

    int max_sum = sum;

    for (int i = k; i < n; i++)
    {
        sum = sum + ar[i] - ar[i - k];
        if (sum > max_sum)
            max_sum = sum;
    }

    return max_sum;
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

    int result = max_subarray_sum_k(ar, n, k);

    if (result == -2147483648)
        printf("Invalid window size");
    else
        printf("%d", result);

    return 0;
}
