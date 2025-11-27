#include <stdio.h>

int numberOfSteps(int num);

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int steps = numberOfSteps(num);

    printf("Number of steps = %d\n", steps);

    return 0;
}
int numberOfSteps(int num)
{
    int count = 0;
    while (num > 0)
    {
        if (num % 2 == 0)
            num = num / 2;
        else
            num = num - 1;
        count++;
    }
    return count;
}