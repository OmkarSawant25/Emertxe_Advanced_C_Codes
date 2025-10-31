#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int freq[1001] = {0}; // assuming nums[i] ∈ [0, 1000]
    int *res = (int *)malloc(numsSize * sizeof(int));
    int count = 0;
    // Count frequency of each number
    for (int i = 0; i < numsSize; i++) {
        freq[nums[i]]++;
    }
    // Collect numbers that appear exactly twice
    for (int i = 0; i < 1001; i++) {
        if (freq[i] == 2)
            res[count++] = i;
    }

    *returnSize = count;
    return res;
}

// int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
//     int *new = (int *)malloc(numsSize * sizeof(int));
//     *returnSize = 2;
//     int j = 0;
//     for(int i = 0; i < numsSize; i++){
//         int count = 0;
//         for(int j = 0; j < numsSize; j++){
//             if(j < i){
//                 if(nums[i] == nums[j])
//                 break;
//             }
//             else{
//                 if(nums[i] == nums[j])
//                     count++;
//             }
//         }
//         if(count > 1)
//             new[j++] = nums[i];    
//     }
//     return new;
// }
int main() {
    int nums[] = {4, 3, 2, 3, 1, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int *result = getSneakyNumbers(nums, numsSize, &returnSize);

    printf("Sneaky numbers: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result); // free allocated memory
    return 0;
}
