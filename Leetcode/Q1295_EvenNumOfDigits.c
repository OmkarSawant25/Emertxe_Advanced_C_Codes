#include <stdio.h>

// Prototype
int findNumbers(int *nums, int numsSize)
{
    int len = 0;
    int evenCount = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int num = nums[i];
        len = 0;
        while (num != 0)
        {
            len++;
            num /= 10;
        }
        if (len % 2 == 0)
        {
            evenCount++;
        }
    }
    return evenCount;
}

int main()
{
    int nums[] = {12, 35, 2, 6, 7896};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = findNumbers(nums, numsSize);
    printf("Count = %d\n", result);

    return 0;
}
