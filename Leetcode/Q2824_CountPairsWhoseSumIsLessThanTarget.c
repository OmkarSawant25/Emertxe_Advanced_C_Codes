#include <stdio.h>

int countPairs(int *nums, int numsSize, int target)
{
    int count = 0;
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] < target)
            {
                count++;
            }
        }
    }
    return count;
}

// int countPairs(int* nums, int numsSize, int target) {
//     int count = 0;
//     for(int i = 0; i < numsSize; i++)
//     {
//         for(int j = 0; j < numsSize; j++)
//         {
//             if((nums[i] + nums[j] < target) && i < j )
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }

int main()
{
    int nums[] = {1, 2, 3, 4};
    int target = 5;
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = countPairs(nums, size, target);
    printf("%d\n", result);
    return 0;
}
