//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include <stdio.h>

void print_chars(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // reads spaces also

    print_chars(str);

    return 0;
}
