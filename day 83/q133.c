//Q133: Enum for months and print number of days

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days
*/

#include <stdio.h>
#include <string.h>

enum months { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main()
{
    char m[10];
    printf("Enter month (e.g., JAN, FEB): ");
    scanf("%s", m);

    if (strcmp(m, "JAN") == 0) printf("31 days");
    else if (strcmp(m, "FEB") == 0) printf("28 or 29 days");
    else if (strcmp(m, "MAR") == 0) printf("31 days");
    else if (strcmp(m, "APR") == 0) printf("30 days");
    else if (strcmp(m, "MAY") == 0) printf("31 days");
    else if (strcmp(m, "Jun") == 0 || strcmp(m, "JUN") == 0) printf("30 days");
    else if (strcmp(m, "JUL") == 0) printf("31 days");
    else if (strcmp(m, "AUG") == 0) printf("31 days");
    else if (strcmp(m, "SEP") == 0) printf("30 days");
    else if (strcmp(m, "OCT") == 0) printf("31 days");
    else if (strcmp(m, "NOV") == 0) printf("30 days");
    else if (strcmp(m, "DEC") == 0) printf("31 days");
    else printf("Invalid month");

    return 0;
}
