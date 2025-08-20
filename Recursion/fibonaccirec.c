#include <stdio.h>
void fibo(int a, int b, int n)
{
    if (a <= n)
    {
        printf("%d ", a);
        fibo(b, a + b, n);
    }
    return;
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    fibo(0, 1, n);
    return 0;
}