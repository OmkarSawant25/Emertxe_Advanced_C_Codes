#include <stdio.h>
#include <stdlib.h>

int *stableMountains(int *height, int heightSize, int threshold, int *returnSize);

int main()
{
    int height[] = {10, 1, 10, 1, 10};
    int heightSize = sizeof(height) / sizeof(height[0]);
    int threshold = 3;

    int returnSize;
    int *res = stableMountains(height, heightSize, threshold, &returnSize);

    printf("Stable mountains indices: ");
    for (int i = 0; i < returnSize; i++)
        printf("%d ", res[i]);

    free(res);
    return 0;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *stableMountains(int *height, int heightSize, int threshold, int *returnSize)
{
    int *ans = (int *)malloc(sizeof(int) * heightSize);
    int k = 0;

    for (int i = 1; i < heightSize; i++)
    {
        if (height[i - 1] > threshold)
        {
            ans[k++] = i;
        }
    }
    *returnSize = k;
    return ans;
}