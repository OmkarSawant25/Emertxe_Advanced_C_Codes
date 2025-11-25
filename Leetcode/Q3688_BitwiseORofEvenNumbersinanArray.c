#include <stdio.h>
#include <stdlib.h>

int evenNumberBitwiseORs(int *nums, int numsSize)
{
    int a = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 == 0) 
            a |= nums[i];     
    }
    return a;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *nums = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int result = evenNumberBitwiseORs(nums, n);
    printf("%d\n", result);

    free(nums);
    return 0;
}
