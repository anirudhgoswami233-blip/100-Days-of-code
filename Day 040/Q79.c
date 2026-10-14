
#include <stdio.h>

int main()
{
    int rows, cols, matrix[100][100];
    int first = 1;

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int d = 0; d < rows + cols - 1; d++)
    {
        int row, col;

        if (d < cols)
        {
            row = 0;
            col = d;
        }
        else
        {
            row = d - cols + 1;
            col = cols - 1;
        }

        while (row < rows && col >= 0)
        {
            if (!first)
                printf(" ");

            printf("%d", matrix[row][col]);
            first = 0;

            row++;
            col--;
        }
    }

    return 0;
}
