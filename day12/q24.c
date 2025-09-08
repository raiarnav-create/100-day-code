/*Q24 : Write a program to calculate electricity bill based on units consumed with these rates :
 First 100 units at ₹5
 unit Next 100 units at ₹7
 unit Next 100 units at ₹10
 unit Above at ₹12 unit*/

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include <stdio.h>
int main()
{
    float bill;
    int units;
    printf("Enter number of unnits consumed : ");
    scanf("%d", &units);

    if (units <= 0)
    {
        printf("0 Units have been consumed NO BILL");
        return 0;
    }
    else if (units <= 100)
    {
        bill = (5 * units);
    }

    else if (units <= 200)
    {
        bill = (5 * 100) + (7 * (units - 100));
    }

    else if ( units <= 300 )
    {
        bill = (5 * 100) + ( 7 * 100 )+ (10 * (units - 200));
    }

    else
    {
        bill = (5 * 100) + (7 * 100) + (10 * 100 ) + (12 * (units - 300));
    }

    printf("Bill : %.2f Ruppes", bill);
    return 0;
}
