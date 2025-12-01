//Q107: Previous greater element for each element (brute force)

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/

#include <stdio.h>

void prev_greater(int ar[], int n, int res[])
{
    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (ar[j] > ar[i])
            {
                res[i] = ar[j];
                found = 1;
                break;
            }
        }
        if (!found)
            res[i] = -1;
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
    prev_greater(ar, n, res);

    for (int i = 0; i < n; i++)
    {
        printf("%d", res[i]);
        if (i != n - 1)
            printf(", ");
    }

    return 0;
}
