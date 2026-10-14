
/*
Q101: Find the first and last occurrence of a target
in a sorted array containing duplicate elements.

Input:
nums = [5,7,7,8,8,10], target = 8

Output:
3,4

*/

#include <stdio.h>

int main()
{
    int nums[] = {5, 7, 7, 8, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target;

    scanf("%d", &target);

    int first = -1, last = -1;
    int low = 0, high = n - 1;

    // Find the first occurrence
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    low = 0;
    high = n - 1;

    // Find the last occurrence
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("%d,%d\n", first, last);

    return 0;
}
