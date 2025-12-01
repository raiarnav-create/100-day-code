//Q103: Find the pivot index of an array.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/

#include <stdio.h>

int pivot_index(int ar[], int n)
{
    int total = 0;

    // Calculate total sum
    for (int i = 0; i < n; i++)
    {
        total += ar[i];
    }

    int left_sum = 0;

    for (int i = 0; i < n; i++)
    {
        int right_sum = total - left_sum - ar[i];

        if (left_sum == right_sum)
            return i;

        left_sum += ar[i];
    }

    return -1;
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

    int index = pivot_index(ar, n);

    printf("%d", index);

    return 0;
}
