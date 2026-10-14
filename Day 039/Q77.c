
#include <stdio.h>

int main()
{
    int rows, cols, matrix[100][100];
    int distinct = 1;

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
        distinct = 0;
    }
    else
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = i + 1; j < rows; j++)
            {
                if (matrix[i][i] == matrix[j][j])
                {
                    distinct = 0;
                    break;
                }
            }

            if (distinct == 0)
                break;
        }
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}
