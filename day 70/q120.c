//Q120: Convert a string to Sentence Case (capitalize each word)

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.
*/

#include <stdio.h>

void sentence_case(char str[])
{
    int i = 0;

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;

    for (i = 1; str[i] != '\0'; i++)
    {
        if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
}

int main()
{
    char str[300];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    sentence_case(str);

    printf("%s", str);

    return 0;
}
