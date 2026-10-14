
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    int a[100][100], b[100][100], result[100][100];

    scanf("%d %d", &r1, &c1);

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (c1 != r2)
    {
        printf("Invalid dimensions");
        return 0;
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < c1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            if (j > 0)
                printf(" ");

            printf("%d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
