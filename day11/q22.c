// Q22 : Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>
int main()
{
    float profit = 0, loss;
    printf("Enter price of article : ");
    float cp, sp;
    scanf("%f", &cp);

    printf("Enter selling price : ");
    scanf("%f", &sp);
    if ((profit = sp - cp) > 0)
    {
        profit = (profit / cp) * 100;
        printf("Profit of %.2f%%", profit);
    }

    else if ( (loss = sp - cp) < 0 )
    {
        loss = (cp - sp) / cp * 100;
        printf("Loss of %.2f %%", loss);
    }

    else 
    {
        printf("No profit or loss ");
    }
}
