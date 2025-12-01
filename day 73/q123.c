//Q123: Count characters, words, and lines in a text file

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("File not found!");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch != ' ' && ch != '\n' && ch != '\t')
        {
            if (in_word == 0)
            {
                words++;
                in_word = 1;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d", lines + 1);

    return 0;
}
