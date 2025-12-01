//Q143: Find and print the student with the highest marks

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
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
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    int max_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > s[max_index].marks)
            max_index = i;
    }

    printf("Topper: %s (Marks: %d)", s[max_index].name, s[max_index].marks);

    return 0;
}
