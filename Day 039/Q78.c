
#include <stdio.h>

int main()
{
    int rows, cols, matrix[100][100];
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        sum += matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}
