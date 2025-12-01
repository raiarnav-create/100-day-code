//Q137: Enum for user roles and display message

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!
*/

#include <stdio.h>
#include <string.h>

enum roles { ADMIN, USER, GUEST };

int main()
{
    char role[20];
    printf("Enter role (ADMIN, USER, GUEST): ");
    scanf("%s", role);

    if (strcmp(role, "ADMIN") == 0)
        printf("Welcome Admin!");
    else if (strcmp(role, "USER") == 0)
        printf("Welcome User!");
    else if (strcmp(role, "GUEST") == 0)
        printf("Welcome Guest!");
    else
        printf("Invalid role");

    return 0;
}
