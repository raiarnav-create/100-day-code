// Q23 : Write a program to calculate library fine based on late days as follows :
// First 5 days late : ₹2
// day Next 5 days late : ₹4
// day Next 20 days days late : ₹6
// day More than 30 days : Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>
int main()
{
    printf("Enter number of days late : ");
    int late;
    scanf("%d", &late);
    int fine;
    if (late <= 5)
    {
        fine = 2 * late;
    }
    else if (late <= 10)
    {
        fine = (2 * 5) + (4 * (late - 5));
    }
    else if (late <= 30)
    {
        fine = (2 * 5) + (4 * 5) + (6 * (late - 10 ));
    }
    else 
    {
        printf("Membership cancelled ");
        return 0;
    }

    printf("Fine :%d Rupee", fine);

    return 0;
}
