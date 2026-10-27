/*
Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic.

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
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    /* fgets keeps the newline, so cut it off */
    str[strcspn(str, "\n")] = '\0';

    int newWord = 1;    /* the first character starts a word */

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            newWord = 1;
        } else if (newWord) {
            str[i] = toupper(str[i]);
            newWord = 0;
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("%s\n", str);

    return 0;
}
