//Q119: Find the repeated element in one single iteration

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int ar[n];
    int visited[10000] = {0};

    int repeated = -1;

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ar[i]);

        if (visited[ar[i]] == 1)
        {
            repeated = ar[i];
        }
        else
        {
            visited[ar[i]] = 1;
        }
    }

    printf("%d", repeated);

    return 0;
}
