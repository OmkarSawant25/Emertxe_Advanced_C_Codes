#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    int max = nums[0];
    int min = nums[0];

    int *ans = (int *)malloc(sizeof(int) * 100);

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max)
            max = nums[i];
        if (nums[i] < min)
            min = nums[i];
    }

    int k = 0;
    for (int i = min; i <= max; i++) {
        int flag = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[j] == i) {
                flag = 1;
                break;      
            }
        }
        if (flag == 0) {
            ans[k] = i;
            k++;
        }
    }

    *returnSize = k;
    return ans;
}

int main() {
    int nums[] = {1, 3, 5, 6, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    int returnSize;
    int *missing = findMissingElements(nums, size, &returnSize);

    printf("Missing elements:\n");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", missing[i]);
    }
    printf("\n");

    free(missing);  // caller frees
    return 0;
}
