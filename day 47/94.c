//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>

void longest_word(char str[], char longest[])
{
    int i = 0, len = 0, max_len = 0, start = 0, max_start = 0;

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (len > max_len)
            {
                max_len = len;
                max_start = start;
            }
            len = 0;
            start = i + 1;
        }
        else
        {
            len++;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    // Copy longest word to output
    for (i = 0; i < max_len; i++)
    {
        longest[i] = str[max_start + i];
    }
    longest[max_len] = '\0';
}

int main()
{
    char str[200];
    char longest[200];

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    longest_word(str, longest);

    printf("%s", longest);

    return 0;
}
