// Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include <stdio.h>
int main()
{
    printf("Enter number : ");
    int a;
    scanf("%a", &a);

    if (a % 2 == 0 && a != 0)
    {
        printf("The given number is even ");
    }
    else
        printf("The given number is odd");
    return 0;
}
