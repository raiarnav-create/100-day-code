// Q17 : Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Enter a :");
    int a, b, c;
    scanf("%d", &a);

    printf("Enter b :");
    scanf("%d", &b);

    printf("Enter c :");
    scanf("%d", &c);

    if ((b * b) - 4 * a * c > 0)
    {
        int x = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);
        int y = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

        printf("Roots are real and different : %d %d ", x, y);
    }
    else if ((b * b) - 4 * a * c == 0)
    {
        int x = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);

        printf("Roots are real and same : %d", x);
    }
    else
    {
        printf("Roots are complex.");
    }
    return 0;
}
