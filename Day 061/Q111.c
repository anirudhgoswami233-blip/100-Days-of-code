/*
Q111: Write a program to take an integer array arr and an integer k as inputs.
The task is to find the first negative integer in each subarray of size k
moving from left to right. If no negative exists in a window, print "0" for
that window. Print the results separated by spaces as output.

Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0
*/

#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("-1\n");
        return 0;
    }

    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break;
            }
        }
        printf("%d", firstNeg);
        if (i < n - k)
            printf(" ");
    }
    printf("\n");

    return 0;
}
