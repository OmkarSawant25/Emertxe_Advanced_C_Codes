#include <stdio.h>

int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int count = 0;
    int max = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
        {
            count++;
            if (count > max)
            {
                max = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    return max;
}

int main()
{
    int nums[] = {1, 1, 0, 1, 1, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = findMaxConsecutiveOnes(nums, numsSize);
    printf("Maximum consecutive ones: %d\n", result);

    return 0;
}
