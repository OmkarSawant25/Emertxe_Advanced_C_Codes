#include <stdio.h>

int subtractProductAndSum(int n)
{
    int sum = 0;
    int prod = 1;
    while (n > 0)
    {
        int rem = n % 10;
        sum += rem;
        prod *= rem;
        n /= 10;
    }
    return prod - sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    int result = subtractProductAndSum(n);
    printf("%d\n", result);

    return 0;
}
