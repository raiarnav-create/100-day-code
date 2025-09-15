// Q49: Write a program to print the following pattern:
// 5 45 345 2345 12345

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; (j<=5 ); j++)
        {
            switch (i)
            {
                case 1:
                    if(j==5)
                    {
                        printf("%d", j);
                    }
                    break;
                    case 2:
                    if(j==5 || j==4)
                    {
                        printf("%d", j);
                    }
                    break;
                    case 3:
                    if(j==5 || j==4 || j==3)
                    {
                        printf("%d", j);
                    }   
                    break;
                    case 4:
                    if(j!=1)
                    {
                        printf("%d", j);
                    }
                    break;
                    case 5:
                    if(j!=0)
                    {
                        printf("%d", j);
                    }
            }
        }
        printf("\n");
    }
        return 0;
}
