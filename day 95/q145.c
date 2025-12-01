//Q145: Return a structure containing top student's details from a function

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/

#include <stdio.h>

struct Student
{
    char name[100];
    int roll;
    int marks;
};

struct Student findTopper(struct Student s[], int n)
{
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }
    return s[maxIndex];
}

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

    struct Student top = findTopper(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d", top.name, top.roll, top.marks);

    return 0;
}
