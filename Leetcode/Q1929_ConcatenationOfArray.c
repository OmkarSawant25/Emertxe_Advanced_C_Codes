#include <stdio.h>
#include <stdlib.h>

// Function prototype
int* getConcatenation(int* nums, int numsSize, int* returnSize);

int main()
{
    int numsSize;
    printf("Enter size of array: ");
    scanf("%d", &numsSize);

    int nums[100];
    printf("Enter %d elements: ", numsSize);
    for (int i = 0; i < numsSize; i++)
        scanf("%d", &nums[i]);

    int returnSize;
    int *result = getConcatenation(nums, numsSize, &returnSize);

    printf("Concatenated array: ");
    for (int i = 0; i < returnSize; i++)
        printf("%d ", result[i]);
    printf("\n");

    free(result);
    return 0;
}

// Function definition
int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    *returnSize = 2 * numsSize;
    int *ans = (int *)malloc(*returnSize * sizeof(int));

    for(int i = 0; i < numsSize; i++)
    {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    }
    return ans;
}
