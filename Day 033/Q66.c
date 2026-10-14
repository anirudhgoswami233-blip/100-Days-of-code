
#include <stdio.h>

int main()
{
    int n, arr[101], element;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    int i = n - 1;

    while (i >= 0 && arr[i] > element)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = element;
    n++;

    for (int j = 0; j < n; j++)
    {
        if (j > 0)
            printf(" ");

        printf("%d", arr[j]);
    }

    return 0;
}
