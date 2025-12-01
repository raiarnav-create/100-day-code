//Q121: Create a file and write name & age using fprintf()

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt
*/

#include <stdio.h>

int main()
{
    char name[100];
    int age;

    printf("Enter name: ");
    scanf("%[^\n]s", name);

    getchar();

    printf("Enter age: ");
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");

    if (fp == NULL)
    {
        printf("Error creating file!");
        return 0;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}
