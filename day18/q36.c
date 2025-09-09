// Q36 : Write a program to find the HCF(GCD)
// of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main()
{
    int hcf=0;
    int num, num2;
    printf("Enter number :");
    scanf("%d", &num);

    printf("Enter number :");
    scanf("%d", &num2);

    for (int i = 1; i <= num; i++)
    {
        if (num%i==0 & num2%i==0)
        {
            hcf = i;
        }
    }

    printf("HFC : %d", hcf);
    return 0;
}
