// Q27 : Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter number : ");
    scanf("%d", &n);
    int terms = n + n;
    for (int i = 1; i <= terms ;i+=2)
    {
        sum += i;
    }
    printf("Sum of odd number till %d is %d ", terms, sum);
}
