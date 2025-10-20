#include <stdio.h>
#include <stdlib.h>

int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes);

int main() {
    int matrixSize = 2;              // number of rows
    int matrixColSize[2] = {3, 3};   // number of columns in each row

    // Allocate 2D matrix
    int **matrix = malloc(matrixSize * sizeof(int *));
    for (int i = 0; i < matrixSize; i++) {
        matrix[i] = malloc(matrixColSize[i] * sizeof(int));
    }

    // Input values
    int count = 1;
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixColSize[i]; j++) {
            matrix[i][j] = count++;
        }
    }

    // Print original matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixColSize[i]; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int returnSize;
    int *returnColumnSizes;
    int **result = transpose(matrix, matrixSize, matrixColSize, &returnSize, &returnColumnSizes);

    // Print transposed matrix
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < returnSize; i++) {
        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < matrixSize; i++) free(matrix[i]);
    free(matrix);

    for (int i = 0; i < returnSize; i++) free(result[i]);
    free(result);
    free(returnColumnSizes);

    return 0;
}

int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes)
{
    int row = matrixSize;
    int col = matrixColSize[0];
    
    int **res = malloc(col * sizeof(int *));
    for(int i = 0; i < col; i++)
    {
        res[i] = malloc(row * sizeof(int));
    }

    *returnColumnSizes = malloc(col * sizeof(int *));
    for(int i = 0; i < col; i++)
    {
        (*returnColumnSizes)[i] = row;
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            res[j][i] = matrix[i][j];
        }
    }
    *returnSize = col;
    return res;
}