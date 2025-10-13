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
int FUN(int L, int R)
{
    return XOR(L - 1) ^ XOR(R);
}

int main()
{
    int L;
    printf("Enter L: ");
    scanf("%d", &L);

    int R;
    printf("Enter R: ");
    scanf("%d", &R);

    int xor = FUN(L, R);
    printf("The Xor from %d to %d is %d\n", L, R, xor);

    return 0;
}
