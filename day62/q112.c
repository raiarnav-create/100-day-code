//Q112: Maximum subarray sum using Kadane's algorithm

/*
Sample Test Cases:
Input 1:
arr = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr = [-2, -4]
Output 2:
-2

Input 3:
arr = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <stdio.h>

int kadane(int ar[], int n)
{
    int max_so_far = ar[0];
    int curr_sum = ar[0];

    for (int i = 1; i < n; i++)
    {
        if (curr_sum + ar[i] < ar[i])
            curr_sum = ar[i];
        else
            curr_sum += ar[i];

        if (curr_sum > max_so_far)
            max_so_far = curr_sum;
    }

    return max_so_far;
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

    int result = kadane(ar, n);
    printf("%d", result);

    return 0;
}
