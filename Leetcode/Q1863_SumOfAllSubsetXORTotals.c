#include <stdio.h>

int subsetXORSum(int *nums, int numsSize)
{
    int or_sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        or_sum |= nums[i];
    }
    return or_sum * (1 << (numsSize - 1));
}

int main()
{
    int nums[] = {1, 3};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = subsetXORSum(nums, n);
    printf("Sum of XOR of all subsets = %d\n", result);

    return 0;
}

// Take the OR of all numbers and multiply it by 2 raised to (n−1). That gives the total XOR sum of all subsets.