// Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

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
    int codd = 0;
    int ceven = 0;
    for (int i = 0; i < l; i++)
    {
        if (ar[i] % 2== 0)
        {
            ceven++;
        }
        else if(ar[i]==0)
        {
            continue;
        }
        else
        {
            codd++;
        }
    }
    printf("Odd :%d, Even %d", codd, ceven);
}
