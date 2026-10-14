
#include <stdio.h>

int main()
{
    int n, arr[100], position;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &position);

    for (int i = position - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");

        printf("%d", arr[i]);
    }

    return 0;
}
