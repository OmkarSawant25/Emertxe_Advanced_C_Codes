#include <stdio.h>
#include <stdbool.h>

int singleNumber(int* nums, int numsSize) {
    int unique = 0;
    for (int i = 0; i < numsSize; i++) {
        bool flag = false;
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j] && i != j) {
                flag = true;
                break;   
            }
        }
        if (flag == false) {
            unique = nums[i];
            break;    
        }
    }
    return unique;   
}

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Single number is: %d\n", singleNumber(nums, size));
    return 0;
}
