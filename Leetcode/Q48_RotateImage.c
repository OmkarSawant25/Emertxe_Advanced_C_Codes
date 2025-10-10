#include <stdio.h>

// Function prototype
void rotate(int **matrix, int matrixSize, int *matrixColSize);

int main()
{
    int n = 3; // Example size
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Create array of pointers for the function
    int *ptrs[3];
    for (int i = 0; i < n; i++)
        ptrs[i] = matrix[i];

    int colSize[3] = {3, 3, 3};

    rotate(ptrs, n, colSize);

    // Print rotated matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    return 0;
}

void rotate(int **matrix, int matrixSize, int *matrixColSize)
{
    for (int i = 0; i < matrixSize; i++)
    {
        for (int j = i; j < matrixColSize[i]; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for (int i = 0; i < matrixSize; i++)
    {
        int j = 0;
        int k = matrixColSize[i] - 1;
        while (j < k)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;
            j++;
            k--;
        }
    }
}
