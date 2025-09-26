/*Q54 : Write a program to print the following pattern :

    *

    ***

    *****
    *******
    ***

    *

    /*
    Sample Test Cases:
    Input 1:

    Output 1:
    Pattern with layers of stars as shown.

    */
#include <stdio.h>
int upper(int i)
{
    for (int j = 1; (j <= 7); j++)
    {
        if (i <= 5 && (j <= (i + i - 1)))
        {
            printf("*");
        }
    }
    if (i == 1 || i == 2)
    {
        printf("\n\n");
    }
    else
    {
        printf("\n");
    }
}

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        if (i < 5)
        {
            upper(i);
        }
        else
        {
            for (int j = 3; j >= 1; j--)
            {
                if ((i ==5 && j>=1))
                    printf("*");
            };
        }
    }
}
