/*
Q114: Write a program to take a string s as input. The task is to find the
length of the longest substring without repeating characters.
Print the length as output.

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

int main() {
    char s[1000];

    printf("Enter the string: ");
    scanf("%999s", s);

    int n = strlen(s);

    /* lastSeen[c] = index just after the last occurrence of character c,
       0 means "not seen yet" */
    int lastSeen[256] = {0};

    int maxLen = 0;
    int start = 0;          /* left edge of the current window */

    for (int i = 0; i < n; i++) {
        unsigned char c = s[i];

        /* if c already appeared inside the window, pull start past it */
        if (lastSeen[c] > start)
            start = lastSeen[c];

        int len = i - start + 1;
        if (len > maxLen)
            maxLen = len;

        lastSeen[c] = i + 1;
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
