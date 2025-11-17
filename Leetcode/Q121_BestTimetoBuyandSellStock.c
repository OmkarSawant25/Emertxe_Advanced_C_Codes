#include <stdio.h>

int max(int a, int b)
{
    if (a < b)
        return b;
    return a;
}

int min(int a, int b)
{
    if (a > b)
        return b;
    return a;
}

int maxProfit(int *prices, int pricesSize)
{
    int mini = prices[0];
    int profit = 0;
    for (int i = 0; i < pricesSize; i++)
    {
        int cost = prices[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, prices[i]);
    }
    return profit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(prices) / sizeof(prices[0]);

    int result = maxProfit(prices, size);
    printf("Maximum Profit = %d\n", result);

    return 0;
}
