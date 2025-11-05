#include <stdio.h>

int arithmeticTriplets(int *nums, int numsSize, int diff)
{
    int count = 0;
    for (int i = 0; i < numsSize - 2; i++){
        for (int j = i + 1; j < numsSize - 1; j++){
            for (int k = j + 1; k < numsSize; k++){
                if (nums[j] - nums[i] == diff && nums[k] - nums[j] == diff)
                    count++;
            }
        }
    }
    return count;
}

int main()
{
    int nums[] = {0, 1, 4, 6, 7, 10};
    int diff = 3;
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = arithmeticTriplets(nums, size, diff);
    printf("%d\n", result);
    return 0;
}
