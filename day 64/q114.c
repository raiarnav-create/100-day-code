//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int longest_unique_substr(const char *s)
{
    int last[256];           // last seen index for each ASCII char
    for (int i = 0; i < 256; ++i) last[i] = -1;

    int maxlen = 0;
    int start = 0;           // start index of current window

    for (int i = 0; s[i] != '\0'; ++i) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= start) {
            // character repeated inside current window; move start
            start = last[c] + 1;
        }
        last[c] = i;         // update last seen index
        int cur_len = i - start + 1;
        if (cur_len > maxlen) maxlen = cur_len;
    }

    return maxlen;
}

int main()
{
    char s[1001]; // supports strings up to length 1000
    printf("Enter string: ");
    if (!fgets(s, sizeof(s), stdin)) {
        printf("Input error.\n");
        return 0;
    }

    // remove trailing newline if present
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') s[len - 1] = '\0';

    int ans = longest_unique_substr(s);
    printf("%d\n", ans);

    return 0;
}
