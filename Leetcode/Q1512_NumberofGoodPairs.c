#include <stdio.h>

int numIdenticalPairs(int *nums, int numsSize); // function prototype

int main()
{
    int nums[] = {1, 2, 3, 1, 1, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = numIdenticalPairs(nums, numsSize);

    printf("Number of good pairs = %d\n", result);

    return 0;
}
int numIdenticalPairs(int *nums, int numsSize)
{
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
                count++;
        }
    }
    return count;
}