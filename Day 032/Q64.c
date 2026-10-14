
/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include <stdio.h>

int main()
{
    long long n;
    int frequency[10] = {0};
    int digit, maxFrequency = 0, result = 0;

    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
        frequency[0] = 1;

    while (n > 0)
    {
        digit = n % 10;
        frequency[digit]++;
        n = n / 10;
    }

    for (int i = 0; i <= 9; i++)
    {
        if (frequency[i] > maxFrequency)
        {
            maxFrequency = frequency[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}
