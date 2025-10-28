#include <stdio.h>

// Function prototype
int countValidSelections(int *nums, int numsSize);

int CheckZero(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int numsSize;
    printf("Enter size of array: ");
    scanf("%d", &numsSize);

    int nums[100];
    printf("Enter %d elements: ", numsSize);
    for (int i = 0; i < numsSize; i++)
        scanf("%d", &nums[i]);

    int result = countValidSelections(nums, numsSize);
    printf("Count of valid selections: %d\n", result);

    return 0;
}

// Function definition
int countValidSelections(int *nums, int numsSize)
{
    int count = 0;
    for (int start = 0; start < numsSize; start++)
    {
        if (nums[start] != 0)
            continue;

        for (int dir = -1; dir <= 1; dir += 2)
        {
            int temp[100];
            for (int j = 0; j < numsSize; j++)
            {
                temp[j] = nums[j];
            }
            int curr = start;
            int d = dir;

            while (curr >= 0 && curr < numsSize)
            {
                if (temp[curr] == 0)
                {
                    curr = curr + d;
                }
                else
                {
                    temp[curr] = temp[curr] - 1;
                    d = -d;
                    curr += d;
                }
            }
            if (CheckZero(temp,numsSize))
            {
                count++;
            }
        }
    }
    return count;
}
