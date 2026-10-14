/*
Q104: Write a Program to take a positive integer n as input, and find the
pivot integer x such that the sum of all elements between 1 and x inclusively
equals the sum of all elements between x and n inclusively. Print the pivot
integer x. If no such integer exists, print -1. Assume that it is guaranteed
that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1
*/

#include <stdio.h>

int pivotInteger(int n) {
    int total = n * (n + 1) / 2;
    int leftSum = 0;

    for (int x = 1; x <= n; x++) {
        leftSum += x;
        if (leftSum == total - leftSum + x)
            return x;
    }
    return -1;
}

int main(void) {
    int n;
    scanf("%d", &n);

    printf("%d\n", pivotInteger(n));
    return 0;
}
