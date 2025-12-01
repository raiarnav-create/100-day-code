//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include <stdio.h>

int count_chars(char str[])
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);    // reads spaces too

    int result = count_chars(str);

    printf("%d", result);

    return 0;
}
