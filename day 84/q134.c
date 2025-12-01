//Q134: Enum with SUCCESS, FAILURE, TIMEOUT and print messages accordingly

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
*/

#include <stdio.h>
#include <string.h>

enum status { SUCCESS, FAILURE, TIMEOUT };

int main()
{
    char input[20];

    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0)
        printf("Operation successful");
    else if (strcmp(input, "FAILURE") == 0)
        printf("Operation failed");
    else if (strcmp(input, "TIMEOUT") == 0)
        printf("Operation timed out");
    else
        printf("Invalid status");

    return 0;
}
