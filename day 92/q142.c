//Q142: Store details of 5 students in an array of structures and print all

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details
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
    struct Student s[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nName\tRoll\tMarks\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%s\t%d\t%d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
