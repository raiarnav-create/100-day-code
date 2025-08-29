//Q15 : Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet
Input 2:
a
Output 2:
Lowercase alphabet
Input 3:
3
Digit
Input 4:
#
Output 4:
Special character
*/
#include <Stdio.h>
#include <ctype.h>
int main ()
{
    char c;
    printf("Enter : ");
    scanf("%s", &c);
  
    if (!(isalpha(c) || isdigit(c)))
    {
        printf("Special character");
    }
    else if (isalpha(c))
    {
        if (isupper(c))
        {
            printf("Uppercase alphabet");
        }
        else
        {
            printf("lowercase alphabet");
        }
    }
    else
    {
        printf("Digit");
    }
    return 0;
}
