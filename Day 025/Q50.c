
/*
Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

Sample Test Cases:
Output 1:
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        // Print leading spaces
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        // Print stars
        for (int j = 0; j < 5 - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
