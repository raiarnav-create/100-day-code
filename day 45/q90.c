//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>

void toggle(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;   // lowercase → uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;   // uppercase → lowercase
        }
        i++;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    toggle(str);

    printf("%s", str);

    return 0;
}
