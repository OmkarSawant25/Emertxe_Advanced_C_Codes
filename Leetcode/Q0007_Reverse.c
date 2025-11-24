#include <stdio.h>
#include <limits.h>
int reverse(int x)
{
    long long sum = 0;
    while (x != 0)
    {
        sum = sum * 10 + (x % 10);
        x = x / 10;
    }
    if (sum < INT_MIN || sum > INT_MAX)
        return 0;
    return (int)sum;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int rev = reverse(num);
    printf("Reversed number: %d\n", rev);

    return 0;
}
