// Q34 : Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter Number :");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }

    count == 0 ? printf("Prime number ") : printf("Not prime ");
    return 0;
}
