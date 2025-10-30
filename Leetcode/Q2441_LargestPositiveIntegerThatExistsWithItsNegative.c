#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

// Function prototype
int findMaxK(int *nums, int numsSize);

int main()
{
    int nums[] = {-1, 2, -3, 3}; // Example input
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    printf("%d\n", findMaxK(nums, numsSize));
    return 0;
}

// int findMaxK(int *nums, int numsSize)
// {
//     int new[2005];
//     int flag = 0;
//     int j = 0;
//     int max = INT_MIN;
//     int e;
//     for (int i = 0; i < numsSize; i++)
//     {
//         flag = 0;
//         e = nums[i];
//         for (int k = 0; k < numsSize; k++)
//         {
//             if ((-e) == nums[k])
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag)
//             new[j++] = e;
//     }
//     for (int i = 0; i < j; i++)
//     {
//         if(max < new[i])
//         {
//             max = new[i];
//         }
//     }
//     if(j == 0)
//     {
//         return -1;
//     }
//     return max;
    
// }

int findMaxK(int *nums, int numsSize)
{
    bool hash[2001] = {0};
    int max = -1;
    for(int i = 0; i < numsSize; i++)
        hash[nums[i] + 1000] = 1;
    for(int i = 1000; i > 0; i--){
        if(hash[i + 1000] && hash[-i + 1000]){
            max = i;
            break;
        }
    }
    return max; 
}


