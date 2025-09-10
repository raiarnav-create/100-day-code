// Q40 : Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    int ognum = num;
    int count = 0;
    int i = 0;
    int ar[49];
    ar[0] = 0;
    while(num != 0)
    {
        count++;
        ar[i] = num % 10;
        i++;
        num /= 10;
    }

    for (int j = count-1 ; j >= 0; j--)
    {
        if(ar[j]==0)
        {
            printf("1");
        }
        else if(ar[j]==1)
        {
            printf("0");
        }
        else 
        {
            printf("Invalid binary input");
            break;
        }
    }
}
