#include <stdio.h>

int countDigits(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = countDigits(num);
    printf("Count of digits that divide %d is: %d\n", num, result);

    return 0;
}
int countDigits(int num)
{
    if (num == 0)
        return 0;
    int count = 0;
    int original = num;
    while (num > 0)
    {
        int val = num % 10;
        if ((original % val == 0) && val != 0)
            count++;
        num = num / 10;
    }
    return count;
}