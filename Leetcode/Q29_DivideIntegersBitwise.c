#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

int divide(int dividend, int divisor)
{
    if (dividend == divisor)
        return 1;
    bool sign = 1;
    if (dividend >= 0 && divisor < 0)
    {
        sign = 0;
    }
    else if (dividend <= 0 && divisor > 0)
    {
        sign = 0;
    }
    long n = labs((long)dividend);
    long d = labs((long)divisor);
    long q = 0;
    while (n >= d)
    {
        int count = 0;
        while (n >= (d << (count + 1)))
        {
            count++;
        }
        q = q + (1L << count);
        n -= d << count;
    }
    if (q == (1L << 31) && sign)
        return INT_MAX;
    if (q == (1L << 31) && !sign)
        return INT_MIN;
    return sign ? q : (-1 * q);
}

int main()
{
    int dividend;
    printf("Enter dividend : ");
    scanf("%d", &dividend);

    int divisor;
    printf("Enter divisor : ");
    scanf("%d", &divisor);

    int ans = divide(dividend, divisor);
    printf("The ans of %d / %d is %d\n", dividend, divisor, ans);

    return 0;
}
