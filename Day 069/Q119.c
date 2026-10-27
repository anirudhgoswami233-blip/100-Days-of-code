/*
Q119: Write a program to take an integer array as input. Only one element
will be repeated. Print the repeated element.
Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1
*/

#include <stdio.h>

#define MAX 100000

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    /* seen[v] = 1 once the value v has appeared */
    int seen[MAX] = {0};
    int value;

    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);

        if (seen[value]) {
            printf("The repeated element is %d\n", value);
            return 0;
        }

        seen[value] = 1;
    }

    printf("No repeated element found\n");
    return 0;
}
