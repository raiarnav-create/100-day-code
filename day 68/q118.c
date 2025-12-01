//Q118: Find the missing number from array containing 0 to n except one

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int ar[n];
    int visited[n + 1];

    for (int i = 0; i <= n; i++)
        visited[i] = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ar[i]);
        visited[ar[i]] = 1;
    }

    int missing = -1;

    for (int i = 0; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            missing = i;
            break;
        }
    }

    printf("%d", missing);

    return 0;
}
