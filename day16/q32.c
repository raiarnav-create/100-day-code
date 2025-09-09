// Q32 : Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main()
{
    int num, onum, palindrome=0;
    printf("Enter number : ");
    scanf("%d", &num);

    onum = num;
    while (num > 0)
    {
        palindrome = palindrome + num % 10;
        palindrome *= 10;
        num /= 10;
    }

    palindrome /= 10;

    if (palindrome == onum)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome ");
    }
}
