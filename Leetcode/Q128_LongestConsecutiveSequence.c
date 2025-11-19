#include <stdio.h>
#include <stdlib.h>

int longestConsecutive(int *nums, int numsSize);

int main()
{
    int numsSize;

    printf("Enter array size: ");
    scanf("%d", &numsSize);

    int nums[10000]; // adjust size if needed

    printf("Enter %d elements:\n", numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }

    int result = longestConsecutive(nums, numsSize);

    printf("Longest Consecutive Sequence = %d\n", result);

    return 0;
}
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int longestConsecutive(int *nums, int numsSize)
{
    if (numsSize == 0)
        return 0;
    qsort(nums, numsSize, sizeof(int), cmp);
    int longest = 1;
    int count = 1;
    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            continue;
        }
        if (nums[i] == nums[i - 1] + 1)
        {
            count++;
        }
        else
        {
            count = 1;
        }
        longest = max(longest, count);
    }
    return longest;
}