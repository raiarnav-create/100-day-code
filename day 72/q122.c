//Q122: Read file using fgets() and print all lines until EOF

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("File not found!");
        return 0;
    }

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
