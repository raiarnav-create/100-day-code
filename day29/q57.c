// Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>
int l;
int input()
{
    printf("Enter length of Array. ");
    scanf("%d", &l);
}

int main()
{
    input();
    int ar[l];
    int sum = 0;
    for (int i = 0; i < l; i++)
    {
        printf("Enter element for %d index :", i);
        scanf("%d", &ar[i]);
        sum += ar[i];
    }
    printf("%d", sum);
}
