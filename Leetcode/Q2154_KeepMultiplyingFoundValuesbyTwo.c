#include <stdio.h>

int findFinalValue(int *nums, int numsSize, int original);

int main()
{
    int numsSize;
    int original;

    printf("Enter array size: ");
    scanf("%d", &numsSize);

    int nums[1000]; // assuming max 1000 elements

    printf("Enter %d elements:\n", numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter original value: ");
    scanf("%d", &original);

    int result = findFinalValue(nums, numsSize, original);

    printf("Final Value = %d\n", result);

    return 0;
}
int findFinalValue(int *nums, int numsSize, int original)
{
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = 0; j < numsSize - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == original)
        {
            original = 2 * original;
        }
    }
    return original;
}