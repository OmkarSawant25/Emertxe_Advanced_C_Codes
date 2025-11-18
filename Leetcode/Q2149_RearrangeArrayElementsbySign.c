#include <stdio.h>
#include <stdlib.h>

int *rearrangeArray(int *nums, int numsSize, int *returnSize)
{
    int *ans = (int *)malloc(sizeof(int) * numsSize);
    int p = 0, n = 1;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] < 0)
        {
            ans[n] = nums[i];
            n += 2;
        }
        else
        {
            ans[p] = nums[i];
            p += 2;
        }
    }
    *returnSize = numsSize;
    return ans;
}

int main()
{
    int nums[] = {3, 1, -2, -5, 2, -4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int returnSize;
    int *result = rearrangeArray(nums, numsSize, &returnSize);

    printf("Rearranged array: ");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result); // Important

    return 0;
}
