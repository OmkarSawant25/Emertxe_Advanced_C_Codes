#include <stdio.h>

int missingNumber(int* nums, int numsSize) {
    int totalSize = numsSize * (numsSize + 1) / 2;
    int actualSize = 0;
    for (int i = 0; i < numsSize; i++) {
        actualSize += nums[i];
    }
    return totalSize - actualSize;
}

int main() {
    int nums[] = {3, 0, 1};  
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Missing number is: %d\n", missingNumber(nums, size)); // Expected 2
    return 0;
}
