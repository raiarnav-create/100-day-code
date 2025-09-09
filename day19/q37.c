// Q37 : Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter number :");
    scanf("%d", &num);

    int num2;
    printf("Enter number :");
    scanf("%d", &num2);

    int grt = num > num2 ? num : num2;
    int lcm = 1;
    // for (int i = 2; i <= grt; i++)
    int i = 2;
    while (num != 1 || num2 != 1)
    {
        if (num % i == 0 && num2 % i == 0)
        {
            lcm *= i;
            num /= i;
            num2 /= i;
            // i = 2;
        }
        else if (num % i == 0)
        {
            lcm *= i;
            num /= i;
            // i = 2;
        }
        else if (num2 % i == 0)
        {
            lcm *= i;
            num2 /= i;
            // i = 2;
        }
        else
        {
            i++;
        }
    }
    printf("LCM : %d", lcm);
    return 0;
}
