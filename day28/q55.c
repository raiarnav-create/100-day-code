// Q55 : Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>
int prime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    static int n;
    printf("Enter number :");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
        if (prime(i))
            printf("%d  ", i);
    return 0;
}
