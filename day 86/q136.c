//Q136: Enum for menu choices and perform operations using switch

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/

#include <stdio.h>
#include <string.h>

enum menu { ADD, SUBTRACT, MULTIPLY };

int main()
{
    char choice[20];
    int a, b;
    enum menu op;

    printf("Enter operation (ADD, SUBTRACT, MULTIPLY): ");
    scanf("%s", choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (strcmp(choice, "ADD") == 0)
        op = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0)
        op = MULTIPLY;
    else
    {
        printf("Invalid operation");
        return 0;
    }

    switch (op)
    {
        case ADD:
            printf("%d", a + b);
            break;
        case SUBTRACT:
            printf("%d", a - b);
            break;
        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}
