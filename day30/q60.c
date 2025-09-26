// Q60 : Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

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
    int cneg = 0;
    int cpos = 0;
    int czero = 0;
    for (int i = 0; i < l; i++)
    {
        if (ar[i]>0)
        {
            cpos++;
        }
        else if (ar[i] == 0)
        {
            czero++;
        }
        else
        {
            cneg++;
        }
    }
    printf("Negative :%d, Positive: %d, Zero : %d", cneg, cpos, czero);
}
