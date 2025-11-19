#include <stdio.h>

void nextPermutation(int *nums, int numsSize);
void rev(int *arr, int n);
void swap(int a, int b, int *arr);

int main()
{
    int numsSize;

    printf("Enter array size: ");
    scanf("%d", &numsSize);

    int nums[1000]; // assuming max 1000 elements

    printf("Enter %d elements:\n", numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }

    nextPermutation(nums, numsSize);

    printf("Next Permutation: ");
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
void rev(int *arr, int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void swap(int a, int b, int *arr)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void nextPermutation(int *nums, int numsSize)
{
    int index = -1;
    for (int i = numsSize - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        rev(nums, numsSize);
        return;
    }
    for (int i = numsSize - 1; i > index; i--)
    {
        if (nums[i] > nums[index])
        {
            swap(i, index, nums);
            break;
        }
    }
    rev(nums + index + 1, numsSize - index - 1);
}