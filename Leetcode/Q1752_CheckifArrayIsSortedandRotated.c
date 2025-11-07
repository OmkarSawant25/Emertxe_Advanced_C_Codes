#include <stdio.h>
#include <stdbool.h>

bool check(int* nums, int numsSize) {
    int count = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] > nums[(i + 1) % numsSize])
            count++;
        if(count > 1)
            return false;
    }
    return true;
}

int main() {
    int nums1[] = {3, 4, 5, 1, 2};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Array 1: %s\n", check(nums1, size1) ? "true" : "false");

    int nums2[] = {2, 1, 3, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Array 2: %s\n", check(nums2, size2) ? "true" : "false");

    int nums3[] = {1, 2, 3, 4, 5};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Array 3: %s\n", check(nums3, size3) ? "true" : "false");

    return 0;
}
