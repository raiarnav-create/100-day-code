// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>
void rotate(int ar[], int n)
{
    int t = ar[n - 1];
    for (int i = n - 1; i >= 0; i++)
    {
        if (i == 0)
            ar[i] = t;
        else
            ar[i] = ar[i - 1];
    }
}

void k_rotate(int ar[], int n, int k)
{
    k = k % n;
    for (int i = 0; i < k; i++)
    {
        rotate(ar, n);
    }
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ar[i]);
    }
    int k;
    printf("Enter the number of rotations: ");
    scanf("%d", &k);
    k_rotate(&ar, n, k);
    printf("The rotated array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}