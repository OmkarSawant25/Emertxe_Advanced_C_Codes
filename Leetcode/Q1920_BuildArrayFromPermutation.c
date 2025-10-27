#include <stdio.h>
#include <stdlib.h>

int* buildArray(int* nums, int numsSize, int* returnSize);

int main()
{
    int numsSize;
    scanf("%d", &numsSize);

    int nums[100]; // assuming max 100 elements for local testing
    for (int i = 0; i < numsSize; i++)
        scanf("%d", &nums[i]);

    int returnSize;
    int *ans = buildArray(nums, numsSize, &returnSize);

    for (int i = 0; i < returnSize; i++)
        printf("%d ", ans[i]);
    printf("\n");

    free(ans);
    return 0;
}

int* buildArray(int* nums, int numsSize, int* returnSize)
{
    int *res = (int *) malloc(numsSize * sizeof(int));
    for(int i = 0; i < numsSize; i++)
    {
        res[i] = nums[nums[i]];
    }
    *returnSize = numsSize;
    return res;
}
