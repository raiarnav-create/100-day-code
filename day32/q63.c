// Q63 : Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int l1, l2;

int input1()
{
    printf("Enter length of first Array. ");
    scanf("%d", &l1);
}

int input2()
{
    printf("Enter length of second Array. ");
    scanf("%d", &l2);
}

int main()
{
    input1();
    int ar1[l1];
    for (int i = 0; i < l1; i++)
    {
        printf("Enter element for %d index of first array: ", i);
        scanf("%d", &ar1[i]);
    }

    input2();
    int ar2[l2];
    for (int i = 0; i < l2; i++)
    {
        printf("Enter element for %d index of second array: ", i);
        scanf("%d", &ar2[i]);
    }

    int ar3[l1 + l2];

    for (int i = 0; i < l1; i++)
    {
        ar3[i] = ar1[i];
    }

    for (int i = 0; i < l2; i++)
    {
        ar3[l1 + i] = ar2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < l1 + l2; i++)
    {
        printf("%d ", ar3[i]);
    }

    return 0;
}
