#include <stdio.h>
#include <stdbool.h>

int sumOfUnique(int *nums, int numsSize)
{
    int su = 0;
    for (int i = 0; i < numsSize; i++)
    {
        bool flag = false;
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[i] == nums[j] && i != j)
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            su = nums[i] + su;
        }
    }
    return su;
}

int main()
{
    int arr[] = {1, 2, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sumOfUnique(arr, size);
    printf("Sum of unique elements = %d\n", result);

    return 0;
}
