#include <stdio.h>
#include <stdlib.h>

// Function prototype
int* sortedSquares(int* nums, int numsSize, int* returnSize);
int compare(const void *a, const void *b)
{
    int A = *((int *)a);
    int B = *((int *)b);
    return A-B;
}

int main()
{
    int nums[] = {-4, -1, 0, 3, 10};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int *result = sortedSquares(nums, numsSize, &returnSize);

    printf("Sorted squares: ");
    for (int i = 0; i < returnSize; i++)
        printf("%d ", result[i]);
    printf("\n");

    free(result); // free allocated memory

    return 0;
}
int* sortedSquares(int* nums, int numsSize, int* returnSize)
{
    *returnSize = numsSize;
    int *arr = malloc(sizeof(int) * numsSize);
    for(int i = 0; i < numsSize; i++)
    {
        arr[i] = nums[i] * nums[i];
    }
    qsort(arr,numsSize,sizeof(int),compare);
    return arr;
}

