/*
Q123: Read a text file and count the total number of characters, words, and
lines. A word is defined as a sequence of non-space characters separated by
spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 33
Words: 6
Lines: 2
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;             /* are we currently inside a word? */

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error: could not open the file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;                 /* whitespace ends a word */
        } else if (inWord == 0) {
            inWord = 1;                 /* first letter of a new word */
            words++;
        }
    }

    /* count the final line if the file doesn't end with a newline */
    if (characters > 0 && inWord)
        lines++;

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
