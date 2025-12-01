//Q104: Find the pivot integer x such that sum(1 to x) = sum(x to n).

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>

int pivot_integer(int n)
{
    // Total sum from 1 to n
    int total = (n * (n + 1)) / 2;

    // We want: sum(1 to x) == sum(x to n)
    // sum(1 to x) = x * (x + 1) / 2
    // sum(x to n) = total - (x - 1)*x/2

    for (int x = 1; x <= n; x++)
    {
        int left_sum = (x * (x + 1)) / 2;
        int right_sum = total - (x * (x - 1)) / 2;

        if (left_sum == right_sum)
            return x;
    }

    return -1;
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int x = pivot_integer(n);

    printf("%d", x);

    return 0;
}
