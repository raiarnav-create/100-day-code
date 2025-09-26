//Q58 : Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

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
    int max = ar[0];
    int min = ar[0];
    for (int i = 0; i < l; i++)
    {
        if(ar[i]>max)
        {
            max = ar[i];
        }
        if(ar[i]<min)
        {
            min = ar[i];
        }
    }
    printf("Max : %d, Min :%d", max, min);
}
