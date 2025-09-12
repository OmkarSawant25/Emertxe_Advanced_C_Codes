#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Prototype
int nonZero(int x)
{
    while (x > 0)
    {
        if (x % 10 == 0)
            return 0;
        x = x / 10;
    }
    return 1;
}
int *getNoZeroIntegers(int n, int *returnSize)
{
    int *ptr = malloc(2 * sizeof(int));

    for (int i = 1; i < n; i++)
    {
        int a = i;
        int b = n - i;
        if (a + b == n && (nonZero(a) && nonZero(b)))
        {
            ptr[0] = a;
            ptr[1] = b;
            *returnSize = 2;
            return ptr;
        }
    }
    return NULL;
}

int main()
{
    int n = 1010;
    int returnSize;

    int *result = getNoZeroIntegers(n, &returnSize);

    printf("Two integers without zero digits whose sum is %d:\n", n);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result); // free the allocated memory
    return 0;
}
