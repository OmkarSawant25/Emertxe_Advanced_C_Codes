#include <stdio.h>
#include <stdlib.h>

int *transformArray(int *nums, int numsSize, int *returnSize)
{
    int *res = (int *)malloc(numsSize * sizeof(int));
    int even = 0, odd = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if ((nums[i] & 1) == 0)
            even++;
        else
            odd++;
    }

    for (int i = 0; i < even; i++)
        res[i] = 0;

    for (int i = even; i < odd + even; i++)
        res[i] = 1;

    *returnSize = numsSize;
    return res;
}

int main()
{
    int nums[] = {2, 3, 4, 5, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int *result = transformArray(nums, numsSize, &returnSize);

    printf("Transformed array: ");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result); // free allocated memory
    return 0;
}
