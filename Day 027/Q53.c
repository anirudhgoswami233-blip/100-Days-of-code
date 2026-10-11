
/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Output 1:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main()
{
    // Upper half
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
