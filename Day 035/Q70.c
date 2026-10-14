
#include <stdio.h>

int main()
{
    int n, arr[100], k, temp[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");

        printf("%d", temp[i]);
    }

    return 0;
}
