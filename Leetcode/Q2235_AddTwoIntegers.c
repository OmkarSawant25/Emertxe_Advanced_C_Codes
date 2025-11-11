#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int result = sum(a, b);
    printf("Sum = %d\n", result);

    return 0;
}
