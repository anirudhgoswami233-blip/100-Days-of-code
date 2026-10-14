
#include <stdio.h>

int main()
{
    int rows, cols, matrix[100][100];
    int symmetric = 1;

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (rows != cols)
    {
        symmetric = 0;
    }
    else
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = i + 1; j < cols; j++)
            {
                if (matrix[i][j] != matrix[j][i])
                {
                    symmetric = 0;
                    break;
                }
            }

            if (symmetric == 0)
                break;
        }
    }

    if (symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
