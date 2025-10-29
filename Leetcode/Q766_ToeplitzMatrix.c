#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Function prototype
bool isToeplitzMatrix(int **matrix, int matrixSize, int *matrixColSize);

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int **matrix = malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
        matrix[i] = malloc(n * sizeof(int));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int matrixColSize = n;
    bool result = isToeplitzMatrix((int **)matrix, m, &matrixColSize);

    if (result)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}

bool isToeplitzMatrix(int **matrix, int matrixSize, int *matrixColSize)
{
    for (int i = 0; i < matrixSize - 1; i++)
    {
        for (int j = 0; j < *matrixColSize - 1; j++)
        {
            if (matrix[i][j] != matrix[i + 1][j + 1])
                return false;
        }
    }
    return true;
}
