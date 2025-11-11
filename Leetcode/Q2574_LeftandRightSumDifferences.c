#include <stdio.h>
#include <stdlib.h>

int* leftRightDifference(int* nums, int numsSize, int* returnSize);

int main() {
    int nums[] = {10, 4, 8, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int *result = leftRightDifference(nums, numsSize, &returnSize);

    printf("Left-Right Difference Array: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result); 
    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int *ans = (int *)malloc(sizeof(int) * numsSize);
    int *leftSum = (int *)malloc(sizeof(int) * numsSize);
    int *rightSum = (int *)malloc(sizeof(int) * numsSize);
    leftSum[0] = 0;
    for (int i = 1; i < numsSize; i++) {
        leftSum[i] = leftSum[i - 1] + nums[i - 1];
    }
    rightSum[numsSize - 1] = 0;
    for (int i = numsSize - 2; i >= 0; i--) {
        rightSum[i] = rightSum[i + 1] + nums[i + 1];
    }
    for (int i = 0; i < numsSize; i++) {
        int diff = leftSum[i] - rightSum[i];
        ans[i] = diff < 0 ? -diff : diff;
        // ans[i] = diff;   
    }
    *returnSize = numsSize;
    free(leftSum);
    free(rightSum);
    return ans;
}

