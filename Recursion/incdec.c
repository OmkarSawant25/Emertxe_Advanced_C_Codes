#include <stdio.h>
void inc(int n)
{
    if (n == 0) // base case
        return;
    printf("%d\n", n);
    inc(n - 1);        // Recursion call
    printf("%d\n", n); // code
    return;
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    inc(n);
    return 0;
}
