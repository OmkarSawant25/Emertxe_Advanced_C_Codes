#include <stdio.h>
#include <stdlib.h>

int **largestLocal(int **grid, int gridSize, int *gridColSize, int *returnSize, int **returnColumnSizes);

int main()
{
    int gridSize = 4;
    int gridColSizeArr[4] = {4, 4, 4, 4};
    int *gridColSize = gridColSizeArr;

    // Allocate grid
    int **grid = (int **)malloc(gridSize * sizeof(int *));
    for (int i = 0; i < gridSize; i++)
    {
        grid[i] = (int *)malloc(gridColSize[i] * sizeof(int));
    }

    // Sample Input
    int input[4][4] = {
        {9, 9, 8, 1},
        {5, 6, 2, 6},
        {8, 2, 6, 4},
        {6, 2, 2, 2}};

    // Copy to grid
    for (int i = 0; i < gridSize; i++)
        for (int j = 0; j < gridColSize[i]; j++)
            grid[i][j] = input[i][j];

    // Output variables
    int returnSize;
    int *returnColumnSizes;

    // Call function
    int **res = largestLocal(grid, gridSize, gridColSize, &returnSize, &returnColumnSizes);

    // Print result
    printf("Output:\n");
    for (int i = 0; i < returnSize; i++)
    {
        for (int j = 0; j < returnColumnSizes[i]; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    // Free result
    for (int i = 0; i < returnSize; i++)
    {
        free(res[i]);
    }
    free(res);
    free(returnColumnSizes);

    // Free grid
    for (int i = 0; i < gridSize; i++)
    {
        free(grid[i]);
    }
    free(grid);

    return 0;
}

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int **largestLocal(int **grid, int gridSize, int *gridColSize, int *returnSize, int **returnColumnSizes)
{
    *returnSize = gridSize - 2;
    int **res = (int **)malloc((*returnSize) * sizeof(int *));
    *returnColumnSizes = (int *)malloc((*returnSize) * sizeof(int));
    for (int i = 0; i < *returnSize; i++)
    {
        res[i] = (int *)malloc((*returnSize) * sizeof(int));
        (*returnColumnSizes)[i] = *returnSize;
    }
    for (int i = 0; i < gridSize - 2; i++)
    {
        for (int j = 0; j < gridSize - 2; j++)
        {
            int max = grid[i][j];
            for (int r = i; r < i + 3; r++)
            {
                for (int c = j; c < j + 3; c++)
                {
                    if (grid[r][c] > max)
                        max = grid[r][c];
                }
            }
            res[i][j] = max;
        }
    }
    return res;
}
