#include <stdio.h>

int addDigits(int num)
{
    int sum = 0;
    if (num < 10)
    {
        return num;
    }
    else
    {
        while (num)
        {
            sum = sum + num % 10;
            num /= 10;
        }
        if (sum < 10)
        {
            return sum;
        }
        else
        {
            return addDigits(sum);
        }
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = addDigits(num);
    printf("Result: %d\n", result);

    return 0;
}
