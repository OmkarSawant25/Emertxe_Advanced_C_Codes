#include <stdio.h>

int findLCM(int a, int b);    // Function prototype

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int l = findLCM(a, b);
    printf("LCM is %d\n", l);

    return 0;
}

int findLCM(int a, int b)
{
    int max = (a > b) ? a : b;
    for (int i = max; ; i++)
    {
        if (i % a == 0 && i % b == 0)
            return i;
    }
}