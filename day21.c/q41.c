// Q41 : Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int digit(int num)
{
    int digit = num % 10;
    // num = num / 10;
    return digit;
}
int main()
{
    int num;
    printf("Enter number :");
    scanf("%d", &num);

    int l = digit(num);
    num /= 10;
    int count = -1;
    int ognum = num;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    num = ognum;
    int f = num / pow(10, count);
    int divisor = 1;
    for (int i = 1; i <= count; i++)
    {
        divisor *= 10;
    }

    num = num % divisor;
    l*= divisor;
    l += num;
    l *= 10;
    l += f;

    printf("%d", l);
    return 0;
}
