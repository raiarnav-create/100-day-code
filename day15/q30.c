// Q30 : Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>
int main ()
{
    int num, rnum=0;
    printf("Enter Number :");
    scanf("%d", &num);
    int onum = num;
    while(num>0)
    {
        rnum = rnum + num % 10;
        rnum *= 10;
        num /= 10;
    }

    rnum /= 10;

    printf("Original number : %d\nReverse Nubmer: %d", onum, rnum);
}
