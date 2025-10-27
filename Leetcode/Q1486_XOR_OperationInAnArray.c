#include <stdio.h>

int xorOperation(int n, int start); // Function prototype

int main()
{
    int n, start;
    scanf("%d %d", &n, &start); // Input: n and start
    int result = xorOperation(n, start);
    printf("%d\n", result); // Output result
    return 0;
}

int xorOperation(int n, int start)
{
    int res = 0;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        num[i] = 2 * i + start;
        res = num[i] ^ res;
    }
    return res;
}