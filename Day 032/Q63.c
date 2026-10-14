
/*
Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/

#include <stdio.h>

int main()
{
    int n, m, arr1[100], arr2[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d", arr2[i]);

        if (i < m - 1)
        {
            printf(" ");
        }
    }

    return 0;
}
