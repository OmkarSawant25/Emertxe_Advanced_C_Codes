#include <stdio.h>
int XOR(int n)
{
    if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else if (n % 4 == 3)
        return 0;
    else
        return n;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int xor = XOR(n);
    printf("The Xor from 1 to %d is %d\n", n, xor);

    return 0;
}
