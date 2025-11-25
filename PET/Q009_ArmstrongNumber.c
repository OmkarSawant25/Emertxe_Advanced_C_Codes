#include <stdio.h>

// Function prototype
int isArmstrong(int num);

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

int isArmstrong(int num)
{
    int count = 0;
    int x = num;
    int ans = num;
    while (num > 0)
    {
        count++;
        num = num / 10;
    }
    int sum = 0;
    while (x > 0)
    {
        int mul = 1;
        int rem = x % 10;
        for (int i = 0; i < count; i++)
        {
            mul = rem * mul;
        }
        sum = sum + mul;
        x = x / 10;
    }
    if (sum == ans)
        return 1;
    else
        return 0;
}