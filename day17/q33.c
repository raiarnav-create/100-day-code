// Q33 : Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num, ognum, count = 0;
    int arm;
    float sum = 0;
    printf("Enter Number : ");
    scanf("%d", &num);

    ognum = num;
    while (num > 0)
    {
        num /= 10;
        count++;
    }

    num = ognum;

    while (num > 0)
    {
        sum = sum + pow(num % 10, count);
        num /= 10;
    }

    if (sum == ognum)
    {
        printf("Armstrong number ");
    }
    else
    {
        printf("Not armstrong number");
    }
}
