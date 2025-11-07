#include <stdio.h>

int minOperations(int* nums, int numsSize, int k) {
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    int rem = sum % k;
    return rem;  // Minimum operations needed
}

int main() {
    int nums[] = {3, 9, 7};
    int k = 5;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    printf("%d\n", minOperations(nums, numsSize, k));
    return 0;
}
