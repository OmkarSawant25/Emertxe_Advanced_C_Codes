#include <stdio.h>
#include <limits.h>

int maxSubArray(int *nums, int numsSize)
{
    int max = INT_MIN;
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        if (sum > max)
            max = sum;
        if (sum < 0)
            sum = 0;
    }
    return max;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubArray(arr, size);
    printf("Maximum Subarray Sum = %d\n", result);

    return 0;
}
