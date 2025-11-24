#include <stdio.h>

// Recursive function to count ways to climb n stairs
int climbStairs(int n) {
    if (n == 0 || n == 1) return 1;

    int a = 1, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Enter number of stairs: ");
    scanf("%d", &n);

    int ways = climbStairs(n);
    printf("Number of ways to climb %d stairs: %d\n", n, ways);

    return 0;
}
