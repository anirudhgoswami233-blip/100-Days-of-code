
/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Output 1:
Pattern with layers of stars as shown.
*/

#include <stdio.h>

int main()
{
    // Upper half of the diamond
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower half of the diamond
    for (int i = 3; i >= 1; i--)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
