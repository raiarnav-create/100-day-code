//Q101: Print the first and last occurrence of target in a sorted array.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>

int first_occ(int ar[], int n, int target)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (ar[i] == target)
            return i;
    }
    return -1;
}

int last_occ(int ar[], int n, int target)
{
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        if (ar[i] == target)
            return i;
    }
    return -1;
}
