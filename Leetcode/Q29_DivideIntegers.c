#include <stdio.h>
#include <limits.h>

int divide(int dividend, int divisor)
{
    if(dividend == INT_MIN && divisor == -1) return INT_MAX;
    return dividend/divisor;
}

int main() {
    int dividend, divisor;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    int result = divide(dividend, divisor);
    printf("%d / %d = %d\n", dividend, divisor, result);

    return 0;
}
