#include <stdio.h>

int differenceOfSums(int n, int m);

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", differenceOfSums(n, m));
    return 0;
}

int differenceOfSums(int n, int m)
{
    int num1 = 0, num2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % m != 0)
            num1 += i;
        else
            num2 += i;
    }
    return num1 - num2;
}
