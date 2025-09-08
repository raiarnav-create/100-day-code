// Q29 : Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6
*/

#include <stdio.h>
int main ()
{
    printf("Enter number : ");
    int num;
    float fac=1;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fac = fac * i;
    }
    printf("Factorial of %d is %.0f", num, fac);
}

