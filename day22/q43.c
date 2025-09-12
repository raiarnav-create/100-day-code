// Q43 : Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int digit(int num)
{
    int digit = num % 10;
    return digit;
}

int fac(int num)
{
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }
    return fac;
}

int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    int ognum = num;

    int sum = 0;
    while( num !=0 )
    {
        sum = sum + fac(digit(num));
        num /= 10;
    }

    if( ognum == sum)
    {
        printf("Strong number");
    }
    else
        printf("Not strong number");
    return 0;
}
