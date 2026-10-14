
#include <stdio.h>

int main()
{
    int n, arr[101], position, element;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &position, &element);

    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    n++;

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");

        printf("%d", arr[i]);
    }

    return 0;
}
