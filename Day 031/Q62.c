
/*
Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1
*/

#include <stdio.h>

int main()
{
    int n, arr[100], temp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

        if (i < n - 1)
        {
            printf(" ");
        }
    }

    return 0;
}
