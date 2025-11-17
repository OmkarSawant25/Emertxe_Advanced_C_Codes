#include <stdio.h>
#include <stdbool.h>

bool kLengthApart(int *nums, int numsSize, int k)
{
    int count = k;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
        {
            if (count < k)
                return false;
            count = 0;
        }
        else
            count++;
    }
    return true;
}

int main()
{
    int nums[] = {1, 0, 0, 0, 1, 0, 0, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 2;

    bool result = kLengthApart(nums, size, k);

    if (result)
        printf("All 1s are at least %d zeros apart.\n", k);
    else
        printf("1s are NOT %d zeros apart.\n", k);

    return 0;
}
