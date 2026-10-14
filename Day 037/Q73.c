
#include <stdio.h>

int main()
{
    int rows, cols, matrix[100][100];
    int rowSum[100];

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++)
    {
        rowSum[i] = 0;

        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        if (i > 0)
            printf(" ");

        printf("%d", rowSum[i]);
    }

    return 0;
}
