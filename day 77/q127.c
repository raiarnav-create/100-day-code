//Q127: Convert lowercase to uppercase while copying from input.txt to output.txt

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/

#include <stdio.h>

int main()
{
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    if (fin == NULL)
    {
        printf("input.txt not found!");
        return 0;
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL)
    {
        printf("output.txt cannot be created!");
        return 0;
    }

    while ((ch = fgetc(fin)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;

        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("File converted successfully!");

    return 0;
}
