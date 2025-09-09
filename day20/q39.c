//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main()
{
    int num; 
    printf("Enter number :");
    scanf("%d", &num);
    int product = 1;
    while(num !=0)
    {
        int digit = num % 10;
        if(digit % 2 != 0)
        {
            product *= digit;
        }
        num /= 10;
    }
    printf("Product of odd digits : %d", product);
    return 0;
}
