#include <stdio.h>
#include <stdlib.h>

// Function prototype
int *spiralOrder(int **matrix, int matrixSize, int *matrixColSize, int *returnSize);

int main()
{
    int rows = 3, cols = 3;
    int *matrixColSize = &cols;

    int **matrix = (int **)malloc(rows * sizeof(int *));
    int values[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < rows; i++)
        matrix[i] = values[i];

    int returnSize;
    int *result = spiralOrder(matrix, rows, matrixColSize, &returnSize);

    printf("Spiral order: ");
    for (int i = 0; i < returnSize; i++)
        printf("%d ", result[i]);
    printf("\n");

    free(result);
    return 0;
}

int *spiralOrder(int **matrix, int matrixSize, int *matrixColSize, int *returnSize)
{
    int minr = 0;
    int minc = 0;
    int maxr = matrixSize - 1;
    int maxc = *matrixColSize - 1;
    *returnSize = 0;
    int tne = matrixSize * (*matrixColSize);
    int *ans = (int *)malloc(tne * sizeof(int));
    // int *res = ans;
    while (*returnSize < tne)
    {
        // min row
        for (int j = minc; (j <= maxc) && (*returnSize < tne); j++)
        {
            ans[*returnSize] = matrix[minr][j];
            (*returnSize)++;
        }
        minr++;
        // max col
        for (int i = minr; i <= maxr && (*returnSize < tne); i++)
        {
            ans[*returnSize] = matrix[i][maxc];
            (*returnSize)++;
        }
        maxc--;
        // max row
        for (int j = maxc; j >= minc && (*returnSize < tne); j--)
        {
            ans[*returnSize] = matrix[maxr][j];
            (*returnSize)++;
        }
        maxr--;
        // min col
        for (int i = maxr; i >= minr && (*returnSize < tne); i--)
        {
            ans[*returnSize] = matrix[i][minc];
            (*returnSize)++;
        }
        minc++;
    }
    return ans;
}
