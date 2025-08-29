// Q18 : Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main()
{
    printf("Enter your percentage :");
    float per;
    scanf("%f", &per);

    if (per >= 90 && per <= 100)
    {
        printf("Grade A");
    }
    else if (per >= 80 && per < 90)
    {
        printf("Grade B");
    }
    else if (per > 50 && per < 80)
    {
        printf("Grade D");
    }
    else
        printf("FAIL");
    return 0;
}
