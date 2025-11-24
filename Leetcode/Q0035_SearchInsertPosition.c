#include <stdio.h>

// Function to find the index to insert target
int searchInsert(int *nums, int numsSize, int target)
{
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] >= target)
        {
            return i;
        }
    }
    return numsSize;
}

int main()
{
    int nums[] = {1, 3, 5, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int target1 = 5;
    int target2 = 2;
    int target3 = 7;
    int target4 = 0;

    printf("Insert position of %d: %d\n", target1, searchInsert(nums, numsSize, target1)); // Expected 2
    printf("Insert position of %d: %d\n", target2, searchInsert(nums, numsSize, target2)); // Expected 1
    printf("Insert position of %d: %d\n", target3, searchInsert(nums, numsSize, target3)); // Expected 4
    printf("Insert position of %d: %d\n", target4, searchInsert(nums, numsSize, target4)); // Expected 0

    return 0;
}
