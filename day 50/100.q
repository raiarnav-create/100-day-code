//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>

int length(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

void print_substrings(char str[])
{
    int l = length(str);

    for (int i = 0; i < l; i++)
    {
        for (int j = i; j < l; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            if (!(i == l - 1 && j == l - 1))
                printf(",");
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    print_substrings(str);

    return 0;
}
