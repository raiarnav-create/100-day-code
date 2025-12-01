//Q132: Enum for traffic lights and print message based on value

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go
*/

#include <stdio.h>
#include <string.h>

enum lights { RED, YELLOW, GREEN };

int main()
{
    char input[20];
    printf("Enter light (RED, YELLOW, GREEN): ");
    scanf("%s", input);

    if (strcmp(input, "RED") == 0)
        printf("Stop");
    else if (strcmp(input, "YELLOW") == 0)
        printf("Wait");
    else if (strcmp(input, "GREEN") == 0)
        printf("Go");
    else
        printf("Invalid input");

    return 0;
}
