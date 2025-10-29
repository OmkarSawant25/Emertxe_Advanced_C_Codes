#include <stdio.h>
// Function prototype
int smallestNumber(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", smallestNumber(n));
    return 0;
}

int smallestNumber(int n)
{
    int num = 0;
    int d = (1 << num) - 1;
    while(d < n)
    {
        num++;
        d = (1 << num) - 1;
    }
    return d;
}
