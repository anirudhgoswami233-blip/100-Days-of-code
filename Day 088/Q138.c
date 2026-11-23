/*
Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2
*/

#include <stdio.h>

enum Color { RED, YELLOW, GREEN };

int main(void)
{
    /* Names in the same order as the enum, so colorNames[c] matches color c */
    const char *colorNames[] = { "RED", "YELLOW", "GREEN" };
    enum Color c;

    for (c = RED; c <= GREEN; c++) {
        printf("%s=%d\n", colorNames[c], c);
    }

    return 0;
}
