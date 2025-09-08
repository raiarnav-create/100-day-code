// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{

    printf("Enter number : ");
    int a, b;
    scanf("%d", &a);
    char op;
    printf("Enter number : ");
    scanf("%d", &b);
    printf("Enter operator : ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        if (b != 0)
            printf("%d", a / b);
        else
            printf("Error: Division by zero");
        break;
    case '%':
        if (b != 0)
            printf("%d", a % b);
        else
            printf("Error: Division by zero");
        break;
    default:
        printf("Invalid operator");
        break;
    }
}
