#include <stdio.h>
#include <stdbool.h>
bool containsDuplicate(int* nums, int numsSize) {
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = 0; j < numsSize; j++)
        {
            if(i != j && nums[i] == nums[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
int main() {
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    if (containsDuplicate(nums, size)) {
        printf("Contains duplicate\n");
    } else {
        printf("No duplicates\n");
    }

    return 0;
}
