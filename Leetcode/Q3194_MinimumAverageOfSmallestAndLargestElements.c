#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

double minimumAverage(int *nums, int numsSize)
{
    qsort(nums, numsSize, sizeof(int), compare);
    double minAvg = 1e9;
    int left = 0, right = numsSize - 1;
    while (left < right)
    {
        double avg = (nums[left] + nums[right]) / 2.0;
        if (avg < minAvg)
            minAvg = avg;
        left++;
        right--;
    }
    return minAvg;
}

int main()
{
    int nums[] = {7, 8, 3, 4, 15, 13, 4, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    double result = minimumAverage(nums, size);
    printf("%f\n", result);
    return 0;
}
