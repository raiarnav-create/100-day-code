//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>

int length(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

int is_rotation(char str1[], char str2[])
{
    int l1 = length(str1);
    int l2 = length(str2);

    if (l1 != l2)
        return 0;

    // Create a big string: str1 + str1
    char temp[200];
    int i, j;

    for (i = 0; i < l1; i++)
        temp[i] = str1[i];
    for (j = 0; j < l1; j++)
        temp[i + j] = str1[j];

    temp[l1 + l1] = '\0';

    // Check if str2 exists inside temp
    i = 0;
    while (temp[i] != '\0')
    {
        int k = i, m = 0;

        while (temp[k] == str2[m] && str2[m] != '\0')
        {
            k++;
            m++;
        }

        if (str2
