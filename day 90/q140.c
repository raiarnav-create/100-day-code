//Q140: Define a struct with enum Gender and print person's gender

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person
{
    char name[100];
    enum Gender gender;
};

int main()
{
    struct Person p;
    char input[20];

    printf("Enter name: ");
    scanf("%[^\n]s", p.name);

    getchar();

    printf("Enter gender (MALE, FEMALE, OTHER): ");
    scanf("%s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else if (strcmp(input, "OTHER") == 0)
        p.gender = OTHER;
    else
    {
        printf("Invalid gender");
        return 0;
    }

    if (p.gender == MALE)
        printf("Male");
    else if (p.gender == FEMALE)
        printf("Female");
    else
        printf("Other");

    return 0;
}
