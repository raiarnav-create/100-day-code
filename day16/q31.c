// Q31 : Write a program to take a number as input and print its equivalent binary
// representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main()
{
    int ar[50], num, i = 0, count = 0;
    printf("Enter number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        ar[i] = num % 2;
        num /= 2;
        i++;
        count++;
    }

    for (int j = count - 1; j >= 0; j--)
    {
        printf("%d", ar[j]);
    }
    return 0;
}
