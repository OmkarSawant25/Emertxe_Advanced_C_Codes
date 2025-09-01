int climbStairs3(int n) {
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (n == 2) return 2;

    int a = 1; // ways to climb n-3
    int b = 1; // ways to climb n-2
    int c = 2; // ways to climb n-1
    int d;

    for (int i = 3; i <= n; i++) {
        d = a + b + c; // ways to climb i stairs
        a = b;
        b = c;
        c = d;
    }

    return c;
}
