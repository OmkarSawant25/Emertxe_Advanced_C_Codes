#include <stdio.h>
#include <stdlib.h>

// Function prototype
int *runningSum(int *nums, int numsSize, int *returnSize);

int main()
{
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    // Call function
    int *result = runningSum(nums, numsSize, &returnSize);

    // Print the result
    printf("Running Sum: ");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Free allocated memory
    free(result);

    return 0;
}

// Your function
int *runningSum(int *nums, int numsSize, int *returnSize)
{
    int *sum = (int *)malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        int total = 0;
        for (int j = 0; j <= i; j++)
        {
            total += nums[j];
        }
        sum[i] = total;
    }
    *returnSize = numsSize;
    return sum;
}


// Optimized

// int* runningSum(int* nums, int numsSize, int* returnSize) {
//     int *sum = (int *)malloc(sizeof(int) * numsSize);
//     *returnSize = numsSize;

//     sum[0] = nums[0];
//     for (int i = 1; i < numsSize; i++) {
//         sum[i] = sum[i - 1] + nums[i];
//     }

//     return sum;
// }
