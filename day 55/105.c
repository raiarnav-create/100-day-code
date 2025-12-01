//Q105: Print the majority element of an array.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/

#include <stdio.h>

int find_majority(int ar[], int n)
{
    int candidate = -1, count = 0;

    // Boyer-Moore Voting Algorithm to find candidate
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = ar[i];
            count = 1;
        }
        else if (ar[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Count occurrences of the candidate
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == candidate)
            freq++;
    }

    // majority condition: freq > n/2
    if (freq > n / 2)
        return candidate;

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

    int result = find_majority(ar, n);

    printf("%d", result);

    return 0;
}
