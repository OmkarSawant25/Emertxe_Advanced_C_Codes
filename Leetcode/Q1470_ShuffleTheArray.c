#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *shuffle(int *nums, int numsSize, int n, int *returnSize)
{
    *returnSize = numsSize;
    int *res = (int *)malloc(sizeof(int) * (*returnSize));

    int i = 0, j = n, k = 0; // i -> first half, j -> second half, k -> result index

    while (i < n && j < numsSize)
    {
        res[k++] = nums[i++]; // take from first half
        res[k++] = nums[j++]; // take from second half
    }

    return res;
}

int main()
{
    int nums[] = {2, 5, 1, 3, 4, 7};
    int n = 3;
    int returnSize;

    int *result = shuffle(nums, 6, n, &returnSize);

    printf("[");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d", result[i]);
        if (i < returnSize - 1)
            printf(", ");
    }
    printf("]\n");

    free(result);
    return 0;
}
