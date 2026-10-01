/*
Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, original, remainder, digits = 0;
    int sum = 0;

    scanf("%d", &n);

    original = n;

    // Count the number of digits
    int temp = n;

    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    // Calculate the sum of powers of each digit
    temp = n;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum = sum + pow(remainder, digits);
        temp = temp / 10;
    }

    if (sum == original)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}
