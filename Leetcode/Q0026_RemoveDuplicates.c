#include <stdio.h>
int removeDuplicates(int *nums, int numsSize);
int main()
{
    int nums[10] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(nums, 10);
    for (int i = 0; i < k; i++)
    {
        printf("%d ", nums[i]);
    }
}
int removeDuplicates(int *nums, int numsSize)
{
    if (numsSize == 0)
        return 0;
    int i = 0;
    for (int j = 1; j < numsSize; j++)
    {
        if (nums[i] != nums[j])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}