#include <stdio.h>

int maxFrequencyElements(int* nums, int numsSize);

int main() {
    int nums[] = {1, 2, 2, 3, 1, 4};  // Example input
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = maxFrequencyElements(nums, size);

    printf("Sum of frequencies of elements with maximum frequency = %d\n", result);

    return 0;
}

int maxFrequencyElements(int* nums, int numsSize) {
    int max = 0;
    int maxFreq = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int count = 0;
        for (int j = 0; j < numsSize; j++)
        {
            if (j < i)
            {
                if (nums[i] == nums[j])
                {
                    break;
                }
            }
            else
            {
                if (nums[i] == nums[j])
                    count++;
            }
        }
        if (count > 0)
        {
            if (count > max)   // new maximum found
            {
                max = count;
                maxFreq = count; 
            }
            else if (count == max)  // same maximum → add
            {
                maxFreq += count;
            }
        }
    }
    return maxFreq;
}
