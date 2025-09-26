// Q53 : Write a program to print the following pattern : ****************************************

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int upper(int i)
{
    for (int j = 1; ( j <= 9); j++)
    {
        if (i <= 5 && (j <= (i + i - 1)))
        {
            printf("*");
        }
    }
}

int lower(int i)
{
    for (int j = 7; j >= 1; j--)
    {
        if ( ( i==6 ) || ( i==7 &&  j<=5) || ( i==8 && j<=3) || ( i==9 && j==1))
        {
            printf("*");
        }
    }
}

int main()
{

    

    for (int i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            upper( i );
        }

        else
            lower( i );
        printf("\n");
    }
}
