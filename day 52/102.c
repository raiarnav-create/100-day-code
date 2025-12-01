//Q102: Find the index of the smallest element >= x (ceil of x).

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/

#include <stdio.h>

int find_ceil(int ar[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (ar[i] >= x)
            return i;   // first element >= x
    }
    return -1;  // no ceil exists
}

int main()
{
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ar[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = find_ceil(ar, n, x);

    printf("%d", index);

    return 0;
}
