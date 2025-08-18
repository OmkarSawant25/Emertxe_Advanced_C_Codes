#include <stdio.h>
int stair(int n)
{
    if (n == 0)
        return 1;
    if(n < 0)
        return 0;
    int totalWays = stair(n - 1) + stair(n - 2) + stair(n - 3);
    return totalWays;
}

int main()
{
    int n;
    printf("Enter number of stairs : ");
    scanf("%d", &n);
    int ways = stair(n);
    printf("%d\n", ways);
    return 0;
}
