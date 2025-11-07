#include <stdio.h>

int smallestEvenMultiple(int n)
{
    if (n % 2 == 0)
        return n;
    return 2 * n;
}

int main()
{
    int n1 = 5, n2 = 6;

    printf("Input: %d → Output: %d\n", n1, smallestEvenMultiple(n1));
    printf("Input: %d → Output: %d\n", n2, smallestEvenMultiple(n2));

    return 0;
}
