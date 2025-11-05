#include <stdio.h>

int minimumOperations(int *nums, int numsSize)
{
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 3 != 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int nums[] = {3, 5, 6, 7, 9};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = minimumOperations(nums, numsSize);

    printf("Minimum operations to make all elements divisible by 3: %d\n", result);

    return 0;
}
