#include <stdio.h>
#include <stdlib.h>

/*
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *smallerNumbersThanCurrent(int *nums, int numsSize, int *returnSize)
{
    int *ans = malloc(sizeof(int) * numsSize);
    if (ans == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < numsSize; i++)
    {
        int count = 0;
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[j] < nums[i] && j != i)
                count++;
        }
        ans[i] = count;
    }
    *returnSize = numsSize;
    return ans;
}

int main()
{
    int numsSize;

    printf("Enter number of elements: ");
    scanf("%d", &numsSize);

    int *nums = malloc(sizeof(int) * numsSize);
    if (nums == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d numbers:\n", numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }

    int returnSize;
    int *result = smallerNumbersThanCurrent(nums, numsSize, &returnSize);

    printf("Output: ");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(nums);
    free(result);
    return 0;
}
