// Q20 : Write a program to display the day of the week based on a number(1–7) using switch - case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of day of the week :");
    scanf("%d", &n);   
    switch(n)
    {
        case 1:
            printf("it is Monday");
            break;
        case 2:
            printf("it is Tuesday");
            break;
        case 3:
            printf("it is Wednesday");
            break;
        case 4:
            printf("it is Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default :
            printf("There are only 7 days in a week.");
    }
    return 0;
}