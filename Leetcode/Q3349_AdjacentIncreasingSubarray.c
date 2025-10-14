#include <stdio.h>
#include <stdbool.h>

bool hasIncreasingSubarrays(int *nums, int numsSize, int k);

int main()
{
    // int nums[] = {1, 2, 3, 5, 4, 6};
    int nums[] = {-15,3,16,0};

    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int k;

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (hasIncreasingSubarrays(nums, numsSize, k))
        printf("Yes, there is an increasing subarray of length %d.\n", k);
    else
        printf("No, there is no increasing subarray of length %d.\n", k);

    return 0;
}

bool hasIncreasingSubarrays(int *nums, int numsSize, int k) {
    if (numsSize < 2*k) return false;
    for (int a = 0; a <= numsSize - 2*k; a++) {
        bool first = true;
        bool second = true;
        for (int i = a; i < a + k - 1; i++) {
            if (nums[i] >= nums[i+1]) {
                first = false;
                break;
            }
        }
        for (int i = a + k; i < a + 2*k - 1; i++) {
            if (nums[i] >= nums[i+1]) {
                second = false;
                break;
            }
        }
        if (first && second) return true;
    }
    return false;
}