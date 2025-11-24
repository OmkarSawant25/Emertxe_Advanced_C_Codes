#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool* prefixesDivBy5(int* nums, int numsSize, int* returnSize) {
    bool *ans = (bool *)malloc(sizeof(bool) * numsSize);
    int x = 0;

    for (int i = 0; i < numsSize; i++) {
        x = (x * 2 + nums[i]) % 5; 
        ans[i] = (x == 0);
    }

    *returnSize = numsSize;
    return ans;
}

int main() {
    int nums[] = {0,1,1};   // sample input
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int returnSize;
    bool *result = prefixesDivBy5(nums, numsSize, &returnSize);

    printf("Output: [");
    for (int i = 0; i < returnSize; i++) {
        printf(result[i] ? "true" : "false");
        if (i < returnSize - 1) printf(", ");
    }
    printf("]\n");

    free(result);
    return 0;
}
