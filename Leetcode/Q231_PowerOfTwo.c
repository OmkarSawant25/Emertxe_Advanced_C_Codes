#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;
    while (n % 2 == 0)
        n /= 2;
    return n == 1;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num))
        printf("%d is a power of two.\n", num);
    else
        printf("%d is not a power of two.\n", num);

    return 0;
}
