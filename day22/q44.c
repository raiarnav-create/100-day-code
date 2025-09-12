// Q44 : Write a program to find the sum of the series : 1 + 3 / 4 + 5 / 6 + 7 / 8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>
int main()
{
    double sum = 1;
    int term;
    printf("Enter terms : ");
    scanf("%d", &term);

    if (term < 1)
    {
        return 0;
    }

    for (int i = 2; i <= (term); i++)
    {
        sum= sum + ((2.0 *i)- 1) / (2.0 * i);

        // sum = sum + (((i * i) - 1) / (float) (i * i));
    }

    printf("Sum of series is %.1lf", sum);
}
