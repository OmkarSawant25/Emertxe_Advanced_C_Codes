#include <stdio.h>
void fibo(int a, int b, int n)
{
    if (a >= n && a <= -n)
    {
        printf("%d ", a);
        if(a-b < n) return;
        fibo(b, a - b, n);
    }
    return;
}

int main()
{
    int limit;
    printf("Enter the limit : ");
    scanf("%d", &limit);
    if (limit <= 0) // Validating that the limit is positive number
    {
        fibo(0, 1, limit); // Function Calling
    }
    else
    {
        printf("Invalid input\n"); // if limit is negative
    }
    return 0;
}