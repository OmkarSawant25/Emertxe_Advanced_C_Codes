#include <stdio.h>
#include <stdlib.h>

int **generate(int numRows, int *returnSize, int **returnColumnSizes);

int main()
{
    int numRows;
    printf("Enter number of rows: ");
    scanf("%d", &numRows);

    int returnSize;
    int *returnColumnSizes;
    int **result = generate(numRows, &returnSize, &returnColumnSizes);

    printf("Pascal's Triangle:\n");
    for (int i = 0; i < returnSize; i++)
    {
        for (int j = 0; j < returnColumnSizes[i]; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
        free(result[i]);
    }

    free(result);
    free(returnColumnSizes);
    return 0;
}

int **generate(int numRows, int *returnSize, int **returnColumnSizes)
{
    *returnSize = numRows;
    *returnColumnSizes = malloc(numRows * sizeof(int));
    int **tri = malloc(numRows * sizeof(int *));
    for (int i = 0; i < numRows; i++)
    {
        int first = 1;
        (*returnColumnSizes)[i] = i + 1;
        tri[i] = malloc((i + 1) * sizeof(int));
        for (int j = 0; j <= i; j++)
        {
            tri[i][j] = first;
            first = first * (i - j) / (j + 1);
        }
    }
    return tri;
}
