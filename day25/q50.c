// 50 : Write a program to print the following pattern : **************
/*
       Sample Test Cases:
       Input 1:

       Output 1:
       *****
       ****
       ***
       **
       *

       Input 2:

       Output 2:
       Note: Spaces indicate indentation.
*/
#include <stdio.h>
int main()
{
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
