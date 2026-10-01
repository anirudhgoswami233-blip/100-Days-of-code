/*
Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21
*/

#include <stdio.h>

int main()
{
    int a, b, x, y, remainder, gcd, lcm;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find GCD using Euclidean algorithm
    while (y != 0)
    {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    gcd = x;

    // LCM formula
    lcm = (a * b) / gcd;

    printf("%d", lcm);

    return 0;
}
