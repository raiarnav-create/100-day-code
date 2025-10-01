//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1
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

    for (int i = 0; i < l; i++)
    {
        printf("Enter element for %d index :", i);
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < l / 2; i++)
    {
        int temp = ar[i];
        ar[i] = ar[l - 1 - i];
        ar[l - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < l; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}
