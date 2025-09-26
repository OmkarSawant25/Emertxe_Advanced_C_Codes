#include <stdio.h>
#include <stdbool.h>

bool isPowerOfThree(int n)
{
    if (n <= 0)
        return false;
    while (n % 3 == 0)
    {
        n /= 3;
    }
    return n == 1;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPowerOfThree(n))
    {
        printf("%d is a power of 3\n", n);
    }
    else
    {
        printf("%d is not a power of 3\n", n);
    }

    return 0;
}
