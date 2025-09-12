// Q45 : Write a program to find the sum of the series : 2 / 3 + 4 / 7 + 6 / 11 + 8 / 15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/

#include <stdio.h>
int main()
{
    int terms;
    float sum = 2.0 / 3.0;
    printf("Enter terms ");
    scanf("%d", &terms);
     
    if (terms < 1)
    {
        printf("Sum of series is 0");
        return 0;
    }

    for (int i = 2; i <= terms; i++)
    {
        sum = sum + (2.0 * i) / ((2*(2.0 * i)) - 1);
    }

    printf("Sum of series is %.2f", sum);
    return 0;
}
