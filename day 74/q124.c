//Q124: Copy content from source file to destination file using fgetc() and fputc()

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
*/

#include <stdio.h>

int main()
{
    char src[100], dest[100];
    FILE *fs, *fd;
    char ch;

    printf("Enter source filename: ");
    scanf("%s", src);

    printf("Enter destination filename: ");
    scanf("%s", dest);

    fs = fopen(src, "r");
    if (fs == NULL)
    {
        printf("Source file not found!");
        return 0;
    }

    fd = fopen(dest, "w");
    if (fd == NULL)
    {
        printf("Cannot create destination file!");
        return 0;
    }

    while ((ch = fgetc(fs)) != EOF)
    {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s", dest);

    return 0;
}
