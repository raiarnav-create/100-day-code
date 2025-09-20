/*Q52 : Write a program to print the following pattern :

    *

    *
    *
    *

    *
    *
    *
    *
    *

    *
    *
    *

    *

    /*
    Sample Test Cases:
    Input 1:

    Output 1:
    Pattern with stars spaced irregularly as shown.

 */
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++) // 5 blocks
    {
        for (int j = 1; j <= 5; j++) // max stars = 5
        {
            if (i == 1 && j <= 1)
            {
                printf("*\n");
            }
            else if (i == 2 && j <= 2)
            {
                printf("*\n");
            }
            else if (i == 3 && j <= 5)
            {
                printf("*\n");
            }
            else if (i == 4 && j <= 3)
            {
                printf("*\n");
            }
            else if (i == 5 && j <= 1)
            {
                printf("*\n");
            }
        }
        if (i != 5)
        {
            printf("\n"); // blank line between blocks
        }
    }
    return 0;
}
