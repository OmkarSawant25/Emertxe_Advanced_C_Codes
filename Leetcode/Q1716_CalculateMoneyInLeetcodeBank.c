#include <stdio.h>

int totalMoney(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", totalMoney(n));
    return 0;
}

int totalMoney(int n)
{
    int total = 0;
    int week = 0;
    while(n > 0)
    {
        week++;
        int days = n >= 7 ? 7 : n;
        for(int i = 0; i < days; i++)
        {
            total = total + week + i;
        } 
        n = n - days;
    }
    return total;
}
