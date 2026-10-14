
#include <stdio.h>

int main()
{
    int n, arr[100];
    int largest, secondLargest;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = -2147483647 - 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -2147483647 - 1)
        printf("-1");
    else
        printf("%d", secondLargest);

    return 0;
}
