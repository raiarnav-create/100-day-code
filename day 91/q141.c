//Q141: Define a structure Student, read and print data

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90
*/

#include <stdio.h>

struct Student
{
    char name[100];
    int roll_no;
    int marks;
};

int main()
{
    struct Student s;

    printf("Enter name: ");
    scanf("%[^\n]s", s.name);

    getchar();

    printf("Enter roll: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll_no, s.marks);

    return 0;
}
