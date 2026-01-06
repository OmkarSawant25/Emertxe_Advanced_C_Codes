#include <stdio.h>
#include <stdbool.h>

bool isPerfectSquare(int num)
{
    long min = 1, max = num;

    while (min <= max)
    {
        long mid = min + (max - min) / 2;
        long sq = mid * mid;

        if (sq == num)
            return true;
        else if (sq < num)
            min = mid + 1;
        else
            max = mid - 1;
    }

    return false;
}

int main()
{
    int num = 49;
    if (isPerfectSquare(num))
        printf("%d is a perfect square\n", num);
    else
        printf("%d is NOT a perfect square\n", num);

    return 0;
}
