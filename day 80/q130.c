//Q130: Store multiple student records using fprintf() and read using fscanf()

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85
Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/

#include <stdio.h>

struct Student
{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    FILE *fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if (fp == NULL)
    {
        printf("Error reading file!");
        return 0;
    }

    struct Student temp;

    while (fscanf(fp, "%s %d %d", temp.name, &temp.roll, &temp.marks) != EOF)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n", temp.name, temp.roll, temp.marks);
    }

    fclose(fp);

    return 0;
}
