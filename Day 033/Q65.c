
#include <stdio.h>

int main()
{
    int n, arr[100], key;
    int low, high, mid, found = -1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("%d", found);

    return 0;
}
