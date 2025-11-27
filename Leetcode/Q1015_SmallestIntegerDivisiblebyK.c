#include <stdio.h>

int smallestRepunitDivByK(int k);

int main()
{
    int k;
    scanf("%d", &k);

    int ans = smallestRepunitDivByK(k);

    printf("%d\n", ans);

    return 0;
}
int smallestRepunitDivByK(int k)
{
    if (k % 2 == 0 || k % 5 == 0)
        return -1;
    int r = 0;
    int count = 0;
    for (int i = 1; i <= k; i++)
    {
        r = (r * 10 + 1) % k;
        count++;
        if (r == 0)
            return i;
    }
    return count;
}