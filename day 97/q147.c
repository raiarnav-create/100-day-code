//Q147: Store employee data in a binary file using fwrite() and read using fread()

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/

#include <stdio.h>

struct Employee
{
    char name[100];
    int id;
    float salary;
};

int main()
{
    struct Employee e, e_read;

    printf("Enter employee name: ");
    scanf("%[^\n]s", e.name);

    getchar();

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    FILE *fp = fopen("employee.dat", "wb");
    if (fp == NULL)
    {
        printf("Error opening file!");
        return 0;
    }

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening file!");
        return 0;
    }

    fread(&e_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee Data Read from File:\n");
    printf("Name: %s\n", e_read.name);
    printf("ID: %d\n", e_read.id);
    printf("Salary: %.2f", e_read.salary);

    return 0;
}
