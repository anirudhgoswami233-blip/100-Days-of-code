/*
Q10: Write a program to input time in seconds and convert it to
hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2
*/

#include <stdio.h>

int main()
{
    int seconds, hours, minutes, remainingSeconds;

    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    remainingSeconds = seconds % 60;

    printf("%d:%d:%d", hours, minutes, remainingSeconds);

    return 0;
}
