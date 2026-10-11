
/*
Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/

#include <stdio.h>

int main()
{
    int n, temp, digit, factorial, sum = 0;

    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digit = temp % 10;
        factorial = 1;

        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        temp = temp / 10;
    }

    if (sum == n && n >= 0)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
