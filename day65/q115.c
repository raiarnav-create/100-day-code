//Q115: Check if two strings are anagrams

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>

int main()
{
    char s[200], t[200];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0;

    printf("Enter first string: ");
    scanf("%[^\n]s", s);

    getchar();

    printf("Enter second string: ");
    scanf("%[^\n]s", t);

    i = 0;
    while (s[i] != '\0')
    {
        freq1[s[i] - 'a']++;
        i++;
    }

    i = 0;
    while (t[i] != '\0')
    {
        freq2[t[i] - 'a']++;
        i++;
    }

    for (i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}
