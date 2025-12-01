//Q125: Append a new line of text to an existing file

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char text[200];

    fp = fopen("data.txt", "a");

    if (fp == NULL)
    {
        printf("File not found!");
        return 0;
    }

    printf("Enter text to append: ");
    scanf("%[^\n]s", text);

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
