#include <stdio.h>
int removeElement(int *nums, int numsSize, int val);
int main()
{
    int nums[8] = {0,1,2,2,3,0,4,2};
    int val = 2;
    int n = removeElement(nums, 8, 2);
    printf("%d\n", n);
    for (int i = 0; i < n ; i++)
    {
        printf("%d ", nums[i]);
    }
}
int removeElement(int *nums, int numsSize, int val)
{
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == val)
        {
            for(int j = i; j < numsSize - 1; j++)
            {
                nums[j] = nums[j+1];
            }
            numsSize--;
            i--;
        }
    }
    return numsSize;
}

/*------------------------ optimize -------------------------*/
// int removeElement(int *nums, int numsSize, int val) {
//     int k = 0; // index for result
//     for (int i = 0; i < numsSize; i++) {
//         if (nums[i] != val) {
//             nums[k++] = nums[i];
//         }
//     }
//     return k;
// }
