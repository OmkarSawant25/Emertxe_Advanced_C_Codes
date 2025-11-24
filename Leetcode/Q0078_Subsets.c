#include <stdio.h>
#include <stdlib.h>

int **subsets(int *nums, int numsSize, int *returnSize, int **returnColumnSizes)
{
    int total = 1 << numsSize;
    int **sub = malloc(sizeof(int *) * total);
    *returnColumnSizes = malloc(sizeof(int *) * total);

    for(int i = 0; i < total; i++)
    {
        int count = 0;
        for(int j = 0; j < numsSize; j++)
        {
            if(i & (1 << j))
            {
                count++;
            }
        }
        (*returnColumnSizes)[i] = count; 
        sub[i] = malloc(sizeof(int) * count);
        int k = 0;
        for(int j = 0; j < numsSize; j++)
        {
            if(i & (1 << j))
            {
                sub[i][k++] = nums[j];
            }
        }
    }
    *returnSize = total;
    return sub;
}

int main()
{
    int nums[] = {1, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int *returnColumnSizes;

    int **result = subsets(nums, numsSize, &returnSize, &returnColumnSizes);

    printf("Subsets:\n");
    for (int i = 0; i < returnSize; i++)
    {
        printf("{ ");
        for (int j = 0; j < returnColumnSizes[i]; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("}\n");
    }

    // Free allocated memory
    for (int i = 0; i < returnSize; i++)
    {
        free(result[i]);
    }
    free(result);
    free(returnColumnSizes);

    return 0;
}


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */