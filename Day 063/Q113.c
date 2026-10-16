/*
Q113: Write a program to take an integer array arr and an integer k as inputs.
The task is to find the kth smallest element in the array.
Print the kth smallest element as output.

Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7
*/

#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid value of k\n");
        return 0;
    }

    /* selection sort, but only k passes are needed */
    for (int i = 0; i < k; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("The %d%s smallest element is %d\n",
           k, (k == 1 ? "st" : k == 2 ? "nd" : k == 3 ? "rd" : "th"), arr[k - 1]);

    return 0;
}
