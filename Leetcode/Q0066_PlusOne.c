#include <stdio.h>
#include <stdlib.h>

int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    int *ans = malloc(sizeof(int) * (digitsSize + 1));
    for (int i = 0; i < digitsSize; i++)
        ans[i] = digits[i];

    int carry = 1;
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        int sum = ans[i] + carry;
        ans[i] = sum % 10;
        carry = sum / 10;
        if (carry == 0)
            break;
    }

    if (carry == 1)
    {
        for (int i = digitsSize; i > 0; i--)
            ans[i] = ans[i - 1];
        ans[0] = 1;
        *returnSize = digitsSize + 1;
        return ans;
    }

    *returnSize = digitsSize;
    return ans;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *digits = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &digits[i]);

    int returnSize;
    int *result = plusOne(digits, n, &returnSize);

    for (int i = 0; i < returnSize; i++)
        printf("%d ", result[i]);

    printf("\n");

    free(digits);
    free(result);

    return 0;
}
